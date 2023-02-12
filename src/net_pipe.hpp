/******************************************************************************
 *  File Name:
 *    net_pipe.hpp
 *
 *  Description:
 *    Internal pipe for sending data between two applications
 *
 *  2023 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef IRIS_NET_PIPE_HPP
#define IRIS_NET_PIPE_HPP

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include <src/generated/Iris.pb.h>
#include <src/generated/Iris.grpc.pb.h>
#include <grpcpp/grpcpp.h>

namespace Iris::Dev
{
  /*---------------------------------------------------------------------------
  Forward Declarations
  ---------------------------------------------------------------------------*/
  class NetPipeImpl;

  /*---------------------------------------------------------------------------
  Public Data
  ---------------------------------------------------------------------------*/
  extern std::unique_ptr<grpc::Server> RPCNetPipeServer;

  /*---------------------------------------------------------------------------
  Public Functions
  ---------------------------------------------------------------------------*/
  void NetPipeThread( const std::string &net_address );

  /*---------------------------------------------------------------------------
  Classes
  ---------------------------------------------------------------------------*/
  class NetPipeImpl final : public NetPipe::Service
  {
  public:
    ::grpc::Status PutMessage(::grpc::ServerContext* context, const ::Iris::DataBuffer* request, ::Iris::StatusCode* response) override;
  };

}    // namespace Iris::Dev

#endif /* !IRIS_NET_PIPE_HPP */
