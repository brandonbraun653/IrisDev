/******************************************************************************
 *  File Name:
 *    netif.hpp
 *
 *  Description:
 *    Network interface for the Iris system
 *
 *  2023 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef IRIS_DEV_NETIF_HPP
#define IRIS_DEV_NETIF_HPP

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include <Iris/physical>
#include <grpcpp/grpcpp.h>
#include <src/generated/Iris.grpc.pb.h>
#include <src/generated/Iris.pb.h>
#include <atomic>
#include <memory>
#include <mutex>
#include <thread>

namespace Iris::Dev
{
  class NetIf final : public NetPipe::Service
  {
  public:
    NetIf();
    ~NetIf();

    /*-------------------------------------------------------------------------
    Public API
    -------------------------------------------------------------------------*/
    void               spawnServer( const std::string &net_address );
    void               killServer();
    void               updateNetworkParameters( const ::Iris::NetworkParameters &params );
    Physical::NetifAPI asAPI();

    /*-------------------------------------------------------------------------
    Netif API
    -------------------------------------------------------------------------*/
    Errno_t open( const Physical::NotifyAPI &notify );
    void    close();
    Errno_t process();
    Errno_t put( Physical::Frame &frame );
    Errno_t get( Physical::Frame &frame );

    /*-------------------------------------------------------------------------
    gRPC API
    -------------------------------------------------------------------------*/
    ::grpc::Status PutMessage( ::grpc::ServerContext *context, const ::Iris::DataBuffer *request,
                               ::Iris::StatusCode *response ) override;

  private:
    std::recursive_mutex          mMutex;
    std::unique_ptr<std::thread>  mRPCThread;
    Physical::NotifyAPI           mNotifyInterface;
    std::unique_ptr<grpc::Server> mRPCServer;
    ::Iris::NetworkParameters     mNetworkParameters;

    void gRPCThread( const std::string &net_address );
  };
}    // namespace Iris::Dev

#endif /* !IRIS_DEV_NETIF_HPP */
