/******************************************************************************
 *  File Name:
 *    test_service.cpp
 *
 *  Description:
 *    gRPC test service implementation
 *
 *  2023 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include <src/test_service.hpp>
#include <src/test_driver.hpp>
#include <Iris/Iris>

using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

namespace Iris::Dev
{
  /*---------------------------------------------------------------------------
  Public Data
  ---------------------------------------------------------------------------*/
  std::unique_ptr<grpc::Server> RPCTestServer;
  std::atomic<bool>             ApplicationKillSignal;


  /*---------------------------------------------------------------------------
  Public Functions
  ---------------------------------------------------------------------------*/
  void TestServiceThread( const std::string &rpc_address )
  {
    TestServiceImpl service;

    ServerBuilder builder;
    builder.AddListeningPort( rpc_address, grpc::InsecureServerCredentials() );
    builder.RegisterService( &service );
    RPCTestServer = std::move( std::unique_ptr<grpc::Server>( builder.BuildAndStart() ) );
    std::cout << "Test server listening on " << rpc_address << std::endl;
    RPCTestServer->Wait();
  }


  /*---------------------------------------------------------------------------
  Classes
  ---------------------------------------------------------------------------*/
  ::grpc::Status TestServiceImpl::PutMessage( ::grpc::ServerContext *context, const ::Iris::DataBuffer *request,
                                              ::Iris::StatusCode *response )
  {
    /*-------------------------------------------------------------------------
    Find the socket that this message is destined for
    -------------------------------------------------------------------------*/
    auto iter = mSockets.find( request->sock_port() );
    if ( iter == mSockets.end() )
    {
      return ::grpc::Status::CANCELLED;
    }

    /*-------------------------------------------------------------------------
    Perform the write
    -------------------------------------------------------------------------*/
    auto written_size = iter->second->sock->write( request->data().data(), request->data().size() );
    if( written_size == request->data().size() )
    {
      return ::grpc::Status::OK;
    }
    else
    {
      return ::grpc::Status::CANCELLED;
    }
  }


  ::grpc::Status TestServiceImpl::GetMessage( ::grpc::ServerContext *context, const ::Iris::SocketInfo* request,
                                              ::Iris::DataBuffer *response )
  {
    /*-------------------------------------------------------------------------
    Find the socket that this message is destined for
    -------------------------------------------------------------------------*/
    auto iter = mSockets.find( request->sock_port() );
    if ( iter == mSockets.end() )
    {
      return ::grpc::Status::CANCELLED;
    }

    /*-------------------------------------------------------------------------
    Check to see if any messages are available. If so, read one out.
    -------------------------------------------------------------------------*/
    if( iter->second->sock->pendingMessages() > 0 )
    {
      size_t msg_size = iter->second->sock->nextMessageSize();
      assert( msg_size <= 1024 );
      assert( msg_size > 0 );

      uint8_t *buffer = new uint8_t[ msg_size ];

      auto read_size = iter->second->sock->read( buffer, msg_size );
      if( read_size == msg_size )
      {
        response->set_data( buffer, msg_size );
        response->set_sock_port( request->sock_port() );
        delete[] buffer;
        return ::grpc::Status::OK;
      }
      else
      {
        delete[] buffer;
        return ::grpc::Status::CANCELLED;
      }
    }

    return ::grpc::Status::CANCELLED;
  }


  ::grpc::Status TestServiceImpl::SetNetworkParameters( ::grpc::ServerContext           *context,
                                                        const ::Iris::NetworkParameters *request, ::Iris::StatusCode *response )
  {
    getNetIf().updateNetworkParameters( *request );
    return ::grpc::Status::OK;
  }


  ::grpc::Status TestServiceImpl::Kill( ::grpc::ServerContext *context, const ::google::protobuf::Empty *request,
                                        ::google::protobuf::Empty *response )
  {
    ApplicationKillSignal = true;
    return ::grpc::Status::OK;
  }


  ::grpc::Status TestServiceImpl::CreateSocket( ::grpc::ServerContext *context, const ::Iris::SocketInfo *request,
                                                ::Iris::StatusCode *response )
  {
    /*-------------------------------------------------------------------------
    Allocate the socket resources
    -------------------------------------------------------------------------*/
    if ( mSockets.find( request->sock_port() ) != mSockets.end() )
    {
      return ::grpc::Status::CANCELLED;
    }

    mSockets.insert( std::make_pair( request->sock_port(), std::make_shared<SockResource>() ) );

    /*-------------------------------------------------------------------------
    Create the socket
    -------------------------------------------------------------------------*/
    auto sock_data = mSockets[ request->sock_port() ];

    Iris::Session::SockCfg cfg;
    cfg.listenOn  = request->sock_port();
    cfg.framePool = &sock_data->frame_pool;
    cfg.rxQueue   = &sock_data->rx_queue;
    cfg.txQueue   = &sock_data->tx_queue;

    getSession().createSocket( cfg );
    sock_data->sock = getSession().getSocket( request->sock_port() );

    if ( sock_data->sock == nullptr )
    {
      mSockets.erase( request->sock_port() );
      return ::grpc::Status::CANCELLED;
    }
    else
    {
      return ::grpc::Status::OK;
    }
  }


  ::grpc::Status TestServiceImpl::DestroySocket( ::grpc::ServerContext *context, const ::Iris::SocketInfo *request,
                                                 ::Iris::StatusCode *response )
  {
    /*-------------------------------------------------------------------------
    Destroy the socket if it exists
    -------------------------------------------------------------------------*/
    auto iter = mSockets.find( request->sock_port() );
    if ( iter != mSockets.end() )
    {
      getSession().destroySocket( iter->second->sock );
      mSockets.erase( iter );
      return ::grpc::Status::OK;
    }
    else
    {
      return ::grpc::Status::CANCELLED;
    }
  }


  ::grpc::Status TestServiceImpl::GetVersion( ::grpc::ServerContext *context, const ::google::protobuf::Empty *request,
                                              ::Iris::VersionInfo *response )
  {
    response->set_version( Iris::VERSION.data() );
    return ::grpc::Status::OK;
  }


  void TestServiceImpl::initialize()
  {
    ApplicationKillSignal = false;
    mSockets.clear();
  }

}    // namespace Iris::Dev
