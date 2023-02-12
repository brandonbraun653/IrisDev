/******************************************************************************
 *  File Name:
 *    net_pipe.cpp
 *
 *  Description:
 *    Implementation details for the NetPipeServer
 *
 *  2023 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include <src/net_pipe.hpp>

using grpc::ServerBuilder;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;


namespace Iris::Dev
{
  /*---------------------------------------------------------------------------
  Public Data
  ---------------------------------------------------------------------------*/
  std::unique_ptr<grpc::Server> RPCNetPipeServer;

  /*---------------------------------------------------------------------------
  Public Functions
  ---------------------------------------------------------------------------*/
  void NetPipeThread( const std::string &net_address )
  {
    NetPipeImpl service;

    ServerBuilder builder;
    builder.AddListeningPort( net_address, grpc::InsecureServerCredentials() );
    builder.RegisterService( &service );
    RPCNetPipeServer = std::move( std::unique_ptr<grpc::Server>( builder.BuildAndStart() ) );
    std::cout << "NET comm server listening on " << net_address << std::endl;
    RPCNetPipeServer->Wait();
  }

  /*---------------------------------------------------------------------------
  Classes
  ---------------------------------------------------------------------------*/
  ::grpc::Status NetPipeImpl::PutMessage(::grpc::ServerContext* context, const ::Iris::DataBuffer* request, ::Iris::StatusCode* response)
  {
    return ::grpc::Status::OK;
  }

}  // namespace Iris::Dev
