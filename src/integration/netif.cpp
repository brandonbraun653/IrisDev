/******************************************************************************
 *  File Name:
 *    netif.cpp
 *
 *  Description:
 *    Network Interface implementation
 *
 *  2023 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include <src/integration/netif.hpp>
#include <etl/delegate.h>

using grpc::ServerBuilder;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

namespace Iris::Dev
{
  /*---------------------------------------------------------------------------
  Classes
  ---------------------------------------------------------------------------*/
  NetIf::NetIf() : mRPCThread( nullptr ), mNotifyInterface( {} ), mRPCServer( nullptr )
  {
  }


  NetIf::~NetIf()
  {
  }


  void NetIf::spawnServer( const std::string &net_address )
  {
    if( !mRPCThread)
    {
      mRPCThread = std::make_unique<std::thread>( &NetIf::gRPCThread, this, net_address );
    }
  }


  void NetIf::killServer()
  {
    mRPCServer->Shutdown();
    mRPCThread->join();
  }


  void NetIf::updateNetworkParameters( const ::Iris::NetworkParameters &params )
  {
    std::lock_guard _lck( mMutex );
    mNetworkParameters = params;
  }


  Physical::NetifAPI NetIf::asAPI()
  {
    auto d_open    = etl::delegate<Errno_t( const Physical::NotifyAPI    &)>::create<NetIf, &NetIf::open>( *this );
    auto d_close   = etl::delegate<void()>::create<NetIf, &NetIf::close>( *this );
    auto d_process = etl::delegate<Errno_t()>::create<NetIf, &NetIf::process>( *this );
    auto d_put     = etl::delegate<Errno_t( Physical::Frame     &)>::create<NetIf, &NetIf::put>( *this );
    auto d_get     = etl::delegate<Errno_t( Physical::Frame     &)>::create<NetIf, &NetIf::get>( *this );

    return { .open = d_open, .close = d_close, .process = d_process, .put = d_put, .get = d_get };
  }


  Errno_t NetIf::open( const Physical::NotifyAPI &notify )
  {
    return 0;
  }


  void NetIf::close()
  {
  }


  Errno_t NetIf::process()
  {
    // Apply network parameters here to introduce random packet loss, etc.
    return 0;
  }


  Errno_t NetIf::put( Physical::Frame &frame )
  {
    return 0;
  }


  Errno_t NetIf::get( Physical::Frame &frame )
  {
    return 0;
  }


  ::grpc::Status NetIf::PutMessage(::grpc::ServerContext* context, const ::Iris::DataBuffer* request, ::Iris::StatusCode* response)
  {
    // Server implementation that accepts a message and puts it into the queue
    return ::grpc::Status::OK;
  }


  void NetIf::gRPCThread( const std::string &net_address )
  {
    ServerBuilder builder;
    builder.AddListeningPort( net_address, grpc::InsecureServerCredentials() );
    builder.RegisterService( this );
    mRPCServer = std::move( std::unique_ptr<grpc::Server>( builder.BuildAndStart() ) );
    std::cout << "NetIf server listening on " << net_address << std::endl;
    mRPCServer->Wait();
  }
}    // namespace Iris::Dev
