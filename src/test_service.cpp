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

using grpc::ServerBuilder;
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
  ::grpc::Status TestServiceImpl::PutMessage(::grpc::ServerContext* context, const ::Iris::DataBuffer* request, ::Iris::StatusCode* response)
  {
    return ::grpc::Status::OK;
  }

  ::grpc::Status TestServiceImpl::GetMessage(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::Iris::DataBuffer* response)
  {
    return ::grpc::Status::OK;
  }

  ::grpc::Status TestServiceImpl::SetNetworkParameters(::grpc::ServerContext* context, const ::Iris::NetworkParameters* request, ::Iris::StatusCode* response)
  {
    return ::grpc::Status::OK;
  }

  ::grpc::Status TestServiceImpl::Kill(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::google::protobuf::Empty* response)
  {
    ApplicationKillSignal = true;
    return ::grpc::Status::OK;
  }


  ::grpc::Status TestServiceImpl::CreateSocket(::grpc::ServerContext* context, const ::Iris::SocketInfo* request, ::Iris::StatusCode* response)
  {
    SockResource* sock_data = new SockResource();

    Iris::Session::SockCfg cfg;
    cfg.listenOn = request->port();
    cfg.framePool = &sock_data->s_frame_pool;
    cfg.rxQueue = &sock_data->s_rx_queue;
    cfg.txQueue = &sock_data->s_tx_queue;

    sock_data->sock = session.createSocket( cfg );
    mSockets[ request->port() ] = sock_data;

    return ::grpc::Status::OK;
  }


  ::grpc::Status TestServiceImpl::DestroySocket(::grpc::ServerContext* context, const ::Iris::SocketInfo* request, ::Iris::StatusCode* response)
  {
    return ::grpc::Status::OK;
  }

  void TestServiceImpl::initialize()
  {
    ApplicationKillSignal = false;
    mSockets.clear();
  }

}  // namespace Iris::Dev
