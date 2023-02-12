// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: Iris.proto
#ifndef GRPC_Iris_2eproto__INCLUDED
#define GRPC_Iris_2eproto__INCLUDED

#include "Iris.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace Iris {

class TestService final {
 public:
  static constexpr char const* service_full_name() {
    return "Iris.TestService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status PutMessage(::grpc::ClientContext* context, const ::Iris::DataBuffer& request, ::Iris::StatusCode* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Iris::StatusCode>> AsyncPutMessage(::grpc::ClientContext* context, const ::Iris::DataBuffer& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Iris::StatusCode>>(AsyncPutMessageRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Iris::StatusCode>> PrepareAsyncPutMessage(::grpc::ClientContext* context, const ::Iris::DataBuffer& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Iris::StatusCode>>(PrepareAsyncPutMessageRaw(context, request, cq));
    }
    virtual ::grpc::Status GetMessage(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::Iris::DataBuffer* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Iris::DataBuffer>> AsyncGetMessage(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Iris::DataBuffer>>(AsyncGetMessageRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Iris::DataBuffer>> PrepareAsyncGetMessage(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Iris::DataBuffer>>(PrepareAsyncGetMessageRaw(context, request, cq));
    }
    virtual ::grpc::Status SetNetworkParameters(::grpc::ClientContext* context, const ::Iris::NetworkParameters& request, ::Iris::StatusCode* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Iris::StatusCode>> AsyncSetNetworkParameters(::grpc::ClientContext* context, const ::Iris::NetworkParameters& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Iris::StatusCode>>(AsyncSetNetworkParametersRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Iris::StatusCode>> PrepareAsyncSetNetworkParameters(::grpc::ClientContext* context, const ::Iris::NetworkParameters& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Iris::StatusCode>>(PrepareAsyncSetNetworkParametersRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void PutMessage(::grpc::ClientContext* context, const ::Iris::DataBuffer* request, ::Iris::StatusCode* response, std::function<void(::grpc::Status)>) = 0;
      virtual void PutMessage(::grpc::ClientContext* context, const ::Iris::DataBuffer* request, ::Iris::StatusCode* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void GetMessage(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::Iris::DataBuffer* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetMessage(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::Iris::DataBuffer* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void SetNetworkParameters(::grpc::ClientContext* context, const ::Iris::NetworkParameters* request, ::Iris::StatusCode* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SetNetworkParameters(::grpc::ClientContext* context, const ::Iris::NetworkParameters* request, ::Iris::StatusCode* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Iris::StatusCode>* AsyncPutMessageRaw(::grpc::ClientContext* context, const ::Iris::DataBuffer& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Iris::StatusCode>* PrepareAsyncPutMessageRaw(::grpc::ClientContext* context, const ::Iris::DataBuffer& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Iris::DataBuffer>* AsyncGetMessageRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Iris::DataBuffer>* PrepareAsyncGetMessageRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Iris::StatusCode>* AsyncSetNetworkParametersRaw(::grpc::ClientContext* context, const ::Iris::NetworkParameters& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Iris::StatusCode>* PrepareAsyncSetNetworkParametersRaw(::grpc::ClientContext* context, const ::Iris::NetworkParameters& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status PutMessage(::grpc::ClientContext* context, const ::Iris::DataBuffer& request, ::Iris::StatusCode* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Iris::StatusCode>> AsyncPutMessage(::grpc::ClientContext* context, const ::Iris::DataBuffer& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Iris::StatusCode>>(AsyncPutMessageRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Iris::StatusCode>> PrepareAsyncPutMessage(::grpc::ClientContext* context, const ::Iris::DataBuffer& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Iris::StatusCode>>(PrepareAsyncPutMessageRaw(context, request, cq));
    }
    ::grpc::Status GetMessage(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::Iris::DataBuffer* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Iris::DataBuffer>> AsyncGetMessage(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Iris::DataBuffer>>(AsyncGetMessageRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Iris::DataBuffer>> PrepareAsyncGetMessage(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Iris::DataBuffer>>(PrepareAsyncGetMessageRaw(context, request, cq));
    }
    ::grpc::Status SetNetworkParameters(::grpc::ClientContext* context, const ::Iris::NetworkParameters& request, ::Iris::StatusCode* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Iris::StatusCode>> AsyncSetNetworkParameters(::grpc::ClientContext* context, const ::Iris::NetworkParameters& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Iris::StatusCode>>(AsyncSetNetworkParametersRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Iris::StatusCode>> PrepareAsyncSetNetworkParameters(::grpc::ClientContext* context, const ::Iris::NetworkParameters& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Iris::StatusCode>>(PrepareAsyncSetNetworkParametersRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void PutMessage(::grpc::ClientContext* context, const ::Iris::DataBuffer* request, ::Iris::StatusCode* response, std::function<void(::grpc::Status)>) override;
      void PutMessage(::grpc::ClientContext* context, const ::Iris::DataBuffer* request, ::Iris::StatusCode* response, ::grpc::ClientUnaryReactor* reactor) override;
      void GetMessage(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::Iris::DataBuffer* response, std::function<void(::grpc::Status)>) override;
      void GetMessage(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::Iris::DataBuffer* response, ::grpc::ClientUnaryReactor* reactor) override;
      void SetNetworkParameters(::grpc::ClientContext* context, const ::Iris::NetworkParameters* request, ::Iris::StatusCode* response, std::function<void(::grpc::Status)>) override;
      void SetNetworkParameters(::grpc::ClientContext* context, const ::Iris::NetworkParameters* request, ::Iris::StatusCode* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::Iris::StatusCode>* AsyncPutMessageRaw(::grpc::ClientContext* context, const ::Iris::DataBuffer& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Iris::StatusCode>* PrepareAsyncPutMessageRaw(::grpc::ClientContext* context, const ::Iris::DataBuffer& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Iris::DataBuffer>* AsyncGetMessageRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Iris::DataBuffer>* PrepareAsyncGetMessageRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Iris::StatusCode>* AsyncSetNetworkParametersRaw(::grpc::ClientContext* context, const ::Iris::NetworkParameters& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Iris::StatusCode>* PrepareAsyncSetNetworkParametersRaw(::grpc::ClientContext* context, const ::Iris::NetworkParameters& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_PutMessage_;
    const ::grpc::internal::RpcMethod rpcmethod_GetMessage_;
    const ::grpc::internal::RpcMethod rpcmethod_SetNetworkParameters_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status PutMessage(::grpc::ServerContext* context, const ::Iris::DataBuffer* request, ::Iris::StatusCode* response);
    virtual ::grpc::Status GetMessage(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::Iris::DataBuffer* response);
    virtual ::grpc::Status SetNetworkParameters(::grpc::ServerContext* context, const ::Iris::NetworkParameters* request, ::Iris::StatusCode* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_PutMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_PutMessage() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_PutMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PutMessage(::grpc::ServerContext* /*context*/, const ::Iris::DataBuffer* /*request*/, ::Iris::StatusCode* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPutMessage(::grpc::ServerContext* context, ::Iris::DataBuffer* request, ::grpc::ServerAsyncResponseWriter< ::Iris::StatusCode>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetMessage() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMessage(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::Iris::DataBuffer* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetMessage(::grpc::ServerContext* context, ::google::protobuf::Empty* request, ::grpc::ServerAsyncResponseWriter< ::Iris::DataBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SetNetworkParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SetNetworkParameters() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_SetNetworkParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetNetworkParameters(::grpc::ServerContext* /*context*/, const ::Iris::NetworkParameters* /*request*/, ::Iris::StatusCode* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetNetworkParameters(::grpc::ServerContext* context, ::Iris::NetworkParameters* request, ::grpc::ServerAsyncResponseWriter< ::Iris::StatusCode>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_PutMessage<WithAsyncMethod_GetMessage<WithAsyncMethod_SetNetworkParameters<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_PutMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_PutMessage() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::Iris::DataBuffer, ::Iris::StatusCode>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::Iris::DataBuffer* request, ::Iris::StatusCode* response) { return this->PutMessage(context, request, response); }));}
    void SetMessageAllocatorFor_PutMessage(
        ::grpc::MessageAllocator< ::Iris::DataBuffer, ::Iris::StatusCode>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::Iris::DataBuffer, ::Iris::StatusCode>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_PutMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PutMessage(::grpc::ServerContext* /*context*/, const ::Iris::DataBuffer* /*request*/, ::Iris::StatusCode* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* PutMessage(
      ::grpc::CallbackServerContext* /*context*/, const ::Iris::DataBuffer* /*request*/, ::Iris::StatusCode* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_GetMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetMessage() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::Iris::DataBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::google::protobuf::Empty* request, ::Iris::DataBuffer* response) { return this->GetMessage(context, request, response); }));}
    void SetMessageAllocatorFor_GetMessage(
        ::grpc::MessageAllocator< ::google::protobuf::Empty, ::Iris::DataBuffer>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::google::protobuf::Empty, ::Iris::DataBuffer>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GetMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMessage(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::Iris::DataBuffer* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetMessage(
      ::grpc::CallbackServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::Iris::DataBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_SetNetworkParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SetNetworkParameters() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::Iris::NetworkParameters, ::Iris::StatusCode>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::Iris::NetworkParameters* request, ::Iris::StatusCode* response) { return this->SetNetworkParameters(context, request, response); }));}
    void SetMessageAllocatorFor_SetNetworkParameters(
        ::grpc::MessageAllocator< ::Iris::NetworkParameters, ::Iris::StatusCode>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::Iris::NetworkParameters, ::Iris::StatusCode>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_SetNetworkParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetNetworkParameters(::grpc::ServerContext* /*context*/, const ::Iris::NetworkParameters* /*request*/, ::Iris::StatusCode* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SetNetworkParameters(
      ::grpc::CallbackServerContext* /*context*/, const ::Iris::NetworkParameters* /*request*/, ::Iris::StatusCode* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_PutMessage<WithCallbackMethod_GetMessage<WithCallbackMethod_SetNetworkParameters<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_PutMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_PutMessage() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_PutMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PutMessage(::grpc::ServerContext* /*context*/, const ::Iris::DataBuffer* /*request*/, ::Iris::StatusCode* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetMessage() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMessage(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::Iris::DataBuffer* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SetNetworkParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SetNetworkParameters() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_SetNetworkParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetNetworkParameters(::grpc::ServerContext* /*context*/, const ::Iris::NetworkParameters* /*request*/, ::Iris::StatusCode* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_PutMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_PutMessage() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_PutMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PutMessage(::grpc::ServerContext* /*context*/, const ::Iris::DataBuffer* /*request*/, ::Iris::StatusCode* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPutMessage(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetMessage() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_GetMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMessage(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::Iris::DataBuffer* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetMessage(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_SetNetworkParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SetNetworkParameters() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_SetNetworkParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetNetworkParameters(::grpc::ServerContext* /*context*/, const ::Iris::NetworkParameters* /*request*/, ::Iris::StatusCode* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetNetworkParameters(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_PutMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_PutMessage() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->PutMessage(context, request, response); }));
    }
    ~WithRawCallbackMethod_PutMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PutMessage(::grpc::ServerContext* /*context*/, const ::Iris::DataBuffer* /*request*/, ::Iris::StatusCode* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* PutMessage(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetMessage() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetMessage(context, request, response); }));
    }
    ~WithRawCallbackMethod_GetMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetMessage(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::Iris::DataBuffer* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetMessage(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SetNetworkParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SetNetworkParameters() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->SetNetworkParameters(context, request, response); }));
    }
    ~WithRawCallbackMethod_SetNetworkParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetNetworkParameters(::grpc::ServerContext* /*context*/, const ::Iris::NetworkParameters* /*request*/, ::Iris::StatusCode* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SetNetworkParameters(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_PutMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_PutMessage() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::Iris::DataBuffer, ::Iris::StatusCode>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::Iris::DataBuffer, ::Iris::StatusCode>* streamer) {
                       return this->StreamedPutMessage(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_PutMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status PutMessage(::grpc::ServerContext* /*context*/, const ::Iris::DataBuffer* /*request*/, ::Iris::StatusCode* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPutMessage(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::Iris::DataBuffer,::Iris::StatusCode>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetMessage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetMessage() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::google::protobuf::Empty, ::Iris::DataBuffer>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::google::protobuf::Empty, ::Iris::DataBuffer>* streamer) {
                       return this->StreamedGetMessage(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetMessage() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetMessage(::grpc::ServerContext* /*context*/, const ::google::protobuf::Empty* /*request*/, ::Iris::DataBuffer* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetMessage(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::protobuf::Empty,::Iris::DataBuffer>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SetNetworkParameters : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_SetNetworkParameters() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::Iris::NetworkParameters, ::Iris::StatusCode>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::Iris::NetworkParameters, ::Iris::StatusCode>* streamer) {
                       return this->StreamedSetNetworkParameters(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_SetNetworkParameters() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SetNetworkParameters(::grpc::ServerContext* /*context*/, const ::Iris::NetworkParameters* /*request*/, ::Iris::StatusCode* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSetNetworkParameters(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::Iris::NetworkParameters,::Iris::StatusCode>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_PutMessage<WithStreamedUnaryMethod_GetMessage<WithStreamedUnaryMethod_SetNetworkParameters<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_PutMessage<WithStreamedUnaryMethod_GetMessage<WithStreamedUnaryMethod_SetNetworkParameters<Service > > > StreamedService;
};

}  // namespace Iris


#endif  // GRPC_Iris_2eproto__INCLUDED
