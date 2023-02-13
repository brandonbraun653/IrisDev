/******************************************************************************
 *  File Name:
 *    test_service.hpp
 *
 *  Description:
 *    gRPC service definition for the test server
 *
 *  2023 | Brandon Braun | brandonbraun653@protonmail.com
 *****************************************************************************/

#pragma once
#ifndef IRIS_DEV_TEST_SERVICE_HPP
#define IRIS_DEV_TEST_SERVICE_HPP

/*-----------------------------------------------------------------------------
Includes
-----------------------------------------------------------------------------*/
#include <src/generated/Iris.pb.h>
#include <src/generated/Iris.grpc.pb.h>
#include <grpcpp/grpcpp.h>
#include <atomic>
#include <map>
#include <Iris/session>

namespace Iris::Dev
{
  /*---------------------------------------------------------------------------
  Forward Declarations
  ---------------------------------------------------------------------------*/
  class TestServiceImpl;

  /*---------------------------------------------------------------------------
  Public Data
  ---------------------------------------------------------------------------*/
  extern std::unique_ptr<grpc::Server> RPCTestServer;
  extern std::atomic<bool>             ApplicationKillSignal;

  /*---------------------------------------------------------------------------
  Public Functions
  ---------------------------------------------------------------------------*/
  void TestServiceThread( const std::string &rpc_address );

  /*---------------------------------------------------------------------------
  Classes
  ---------------------------------------------------------------------------*/
  class TestServiceImpl final : public TestService::Service
  {
  public:
    ::grpc::Status PutMessage( ::grpc::ServerContext *context, const ::Iris::DataBuffer *request,
                               ::Iris::StatusCode *response ) override;
    ::grpc::Status GetMessage( ::grpc::ServerContext *context, const ::Iris::SocketInfo* request,
                               ::Iris::DataBuffer *response ) override;
    ::grpc::Status SetNetworkParameters( ::grpc::ServerContext *context, const ::Iris::NetworkParameters *request,
                                         ::Iris::StatusCode *response ) override;
    ::grpc::Status Kill( ::grpc::ServerContext *context, const ::google::protobuf::Empty *request,
                         ::google::protobuf::Empty *response ) override;
    ::grpc::Status CreateSocket( ::grpc::ServerContext *context, const ::Iris::SocketInfo *request,
                                 ::Iris::StatusCode *response ) override;
    ::grpc::Status DestroySocket( ::grpc::ServerContext *context, const ::Iris::SocketInfo *request,
                                  ::Iris::StatusCode *response ) override;

    void initialize();

  private:
    struct SockResource
    {
      Iris::Session::Socket  *sock;
      etl::queue_spsc_atomic<Transport::Packet, 32> tx_queue;
      etl::queue_spsc_atomic<Transport::Packet, 32> rx_queue;
      etl::pool<Physical::Frame, 128> frame_pool;
    };

    std::map<uint32_t, std::shared_ptr<SockResource>> mSockets;
  };


}    // namespace Iris::Dev

#endif /* !IRIS_DEV_TEST_SERVICE_HPP */
