// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Iris.proto

#include "Iris.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace Iris {
PROTOBUF_CONSTEXPR StatusCode::StatusCode(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.status_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StatusCodeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR StatusCodeDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StatusCodeDefaultTypeInternal() {}
  union {
    StatusCode _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StatusCodeDefaultTypeInternal _StatusCode_default_instance_;
PROTOBUF_CONSTEXPR DataBuffer::DataBuffer(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.data_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct DataBufferDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DataBufferDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~DataBufferDefaultTypeInternal() {}
  union {
    DataBuffer _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DataBufferDefaultTypeInternal _DataBuffer_default_instance_;
PROTOBUF_CONSTEXPR NetworkParameters::NetworkParameters(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.framelossprobability_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct NetworkParametersDefaultTypeInternal {
  PROTOBUF_CONSTEXPR NetworkParametersDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~NetworkParametersDefaultTypeInternal() {}
  union {
    NetworkParameters _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 NetworkParametersDefaultTypeInternal _NetworkParameters_default_instance_;
}  // namespace Iris
static ::_pb::Metadata file_level_metadata_Iris_2eproto[3];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_Iris_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Iris_2eproto = nullptr;

const uint32_t TableStruct_Iris_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Iris::StatusCode, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Iris::StatusCode, _impl_.status_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Iris::DataBuffer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Iris::DataBuffer, _impl_.data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Iris::NetworkParameters, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Iris::NetworkParameters, _impl_.framelossprobability_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Iris::StatusCode)},
  { 7, -1, -1, sizeof(::Iris::DataBuffer)},
  { 14, -1, -1, sizeof(::Iris::NetworkParameters)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::Iris::_StatusCode_default_instance_._instance,
  &::Iris::_DataBuffer_default_instance_._instance,
  &::Iris::_NetworkParameters_default_instance_._instance,
};

const char descriptor_table_protodef_Iris_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nIris.proto\022\004Iris\032\033google/protobuf/empt"
  "y.proto\"N\n\nStatusCode\022%\n\006status\030\001 \001(\0162\025."
  "Iris.StatusCode.Code\"\031\n\004Code\022\006\n\002OK\020\000\022\t\n\005"
  "ERROR\020\001\"\032\n\nDataBuffer\022\014\n\004data\030\001 \001(\014\"1\n\021N"
  "etworkParameters\022\034\n\024frameLossProbability"
  "\030\001 \001(\0022\272\001\n\013TestService\0220\n\nPutMessage\022\020.I"
  "ris.DataBuffer\032\020.Iris.StatusCode\0226\n\nGetM"
  "essage\022\026.google.protobuf.Empty\032\020.Iris.Da"
  "taBuffer\022A\n\024SetNetworkParameters\022\027.Iris."
  "NetworkParameters\032\020.Iris.StatusCode2;\n\007N"
  "etPipe\0220\n\nPutMessage\022\020.Iris.DataBuffer\032\020"
  ".Iris.StatusCodeb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_Iris_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::_pbi::once_flag descriptor_table_Iris_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Iris_2eproto = {
    false, false, 464, descriptor_table_protodef_Iris_2eproto,
    "Iris.proto",
    &descriptor_table_Iris_2eproto_once, descriptor_table_Iris_2eproto_deps, 1, 3,
    schemas, file_default_instances, TableStruct_Iris_2eproto::offsets,
    file_level_metadata_Iris_2eproto, file_level_enum_descriptors_Iris_2eproto,
    file_level_service_descriptors_Iris_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Iris_2eproto_getter() {
  return &descriptor_table_Iris_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Iris_2eproto(&descriptor_table_Iris_2eproto);
namespace Iris {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StatusCode_Code_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_Iris_2eproto);
  return file_level_enum_descriptors_Iris_2eproto[0];
}
bool StatusCode_Code_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr StatusCode_Code StatusCode::OK;
constexpr StatusCode_Code StatusCode::ERROR;
constexpr StatusCode_Code StatusCode::Code_MIN;
constexpr StatusCode_Code StatusCode::Code_MAX;
constexpr int StatusCode::Code_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class StatusCode::_Internal {
 public:
};

StatusCode::StatusCode(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Iris.StatusCode)
}
StatusCode::StatusCode(const StatusCode& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  StatusCode* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.status_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.status_ = from._impl_.status_;
  // @@protoc_insertion_point(copy_constructor:Iris.StatusCode)
}

inline void StatusCode::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.status_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

StatusCode::~StatusCode() {
  // @@protoc_insertion_point(destructor:Iris.StatusCode)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void StatusCode::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void StatusCode::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void StatusCode::Clear() {
// @@protoc_insertion_point(message_clear_start:Iris.StatusCode)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.status_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StatusCode::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .Iris.StatusCode.Code status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_status(static_cast<::Iris::StatusCode_Code>(val));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* StatusCode::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Iris.StatusCode)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .Iris.StatusCode.Code status = 1;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Iris.StatusCode)
  return target;
}

size_t StatusCode::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Iris.StatusCode)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .Iris.StatusCode.Code status = 1;
  if (this->_internal_status() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_status());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StatusCode::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    StatusCode::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StatusCode::GetClassData() const { return &_class_data_; }


void StatusCode::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<StatusCode*>(&to_msg);
  auto& from = static_cast<const StatusCode&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Iris.StatusCode)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_status() != 0) {
    _this->_internal_set_status(from._internal_status());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StatusCode::CopyFrom(const StatusCode& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Iris.StatusCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StatusCode::IsInitialized() const {
  return true;
}

void StatusCode::InternalSwap(StatusCode* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.status_, other->_impl_.status_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StatusCode::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Iris_2eproto_getter, &descriptor_table_Iris_2eproto_once,
      file_level_metadata_Iris_2eproto[0]);
}

// ===================================================================

class DataBuffer::_Internal {
 public:
};

DataBuffer::DataBuffer(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Iris.DataBuffer)
}
DataBuffer::DataBuffer(const DataBuffer& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  DataBuffer* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.data_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_data().empty()) {
    _this->_impl_.data_.Set(from._internal_data(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:Iris.DataBuffer)
}

inline void DataBuffer::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.data_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

DataBuffer::~DataBuffer() {
  // @@protoc_insertion_point(destructor:Iris.DataBuffer)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void DataBuffer::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.data_.Destroy();
}

void DataBuffer::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void DataBuffer::Clear() {
// @@protoc_insertion_point(message_clear_start:Iris.DataBuffer)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.data_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DataBuffer::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_data();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* DataBuffer::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Iris.DataBuffer)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes data = 1;
  if (!this->_internal_data().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Iris.DataBuffer)
  return target;
}

size_t DataBuffer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Iris.DataBuffer)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes data = 1;
  if (!this->_internal_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData DataBuffer::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    DataBuffer::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*DataBuffer::GetClassData() const { return &_class_data_; }


void DataBuffer::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<DataBuffer*>(&to_msg);
  auto& from = static_cast<const DataBuffer&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Iris.DataBuffer)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_data().empty()) {
    _this->_internal_set_data(from._internal_data());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void DataBuffer::CopyFrom(const DataBuffer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Iris.DataBuffer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DataBuffer::IsInitialized() const {
  return true;
}

void DataBuffer::InternalSwap(DataBuffer* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.data_, lhs_arena,
      &other->_impl_.data_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata DataBuffer::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Iris_2eproto_getter, &descriptor_table_Iris_2eproto_once,
      file_level_metadata_Iris_2eproto[1]);
}

// ===================================================================

class NetworkParameters::_Internal {
 public:
};

NetworkParameters::NetworkParameters(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Iris.NetworkParameters)
}
NetworkParameters::NetworkParameters(const NetworkParameters& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  NetworkParameters* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.framelossprobability_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.framelossprobability_ = from._impl_.framelossprobability_;
  // @@protoc_insertion_point(copy_constructor:Iris.NetworkParameters)
}

inline void NetworkParameters::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.framelossprobability_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

NetworkParameters::~NetworkParameters() {
  // @@protoc_insertion_point(destructor:Iris.NetworkParameters)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void NetworkParameters::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void NetworkParameters::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void NetworkParameters::Clear() {
// @@protoc_insertion_point(message_clear_start:Iris.NetworkParameters)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.framelossprobability_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NetworkParameters::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // float frameLossProbability = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          _impl_.framelossprobability_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* NetworkParameters::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Iris.NetworkParameters)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // float frameLossProbability = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_framelossprobability = this->_internal_framelossprobability();
  uint32_t raw_framelossprobability;
  memcpy(&raw_framelossprobability, &tmp_framelossprobability, sizeof(tmp_framelossprobability));
  if (raw_framelossprobability != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(1, this->_internal_framelossprobability(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Iris.NetworkParameters)
  return target;
}

size_t NetworkParameters::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Iris.NetworkParameters)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float frameLossProbability = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_framelossprobability = this->_internal_framelossprobability();
  uint32_t raw_framelossprobability;
  memcpy(&raw_framelossprobability, &tmp_framelossprobability, sizeof(tmp_framelossprobability));
  if (raw_framelossprobability != 0) {
    total_size += 1 + 4;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData NetworkParameters::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    NetworkParameters::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*NetworkParameters::GetClassData() const { return &_class_data_; }


void NetworkParameters::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<NetworkParameters*>(&to_msg);
  auto& from = static_cast<const NetworkParameters&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Iris.NetworkParameters)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_framelossprobability = from._internal_framelossprobability();
  uint32_t raw_framelossprobability;
  memcpy(&raw_framelossprobability, &tmp_framelossprobability, sizeof(tmp_framelossprobability));
  if (raw_framelossprobability != 0) {
    _this->_internal_set_framelossprobability(from._internal_framelossprobability());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void NetworkParameters::CopyFrom(const NetworkParameters& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Iris.NetworkParameters)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NetworkParameters::IsInitialized() const {
  return true;
}

void NetworkParameters::InternalSwap(NetworkParameters* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.framelossprobability_, other->_impl_.framelossprobability_);
}

::PROTOBUF_NAMESPACE_ID::Metadata NetworkParameters::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Iris_2eproto_getter, &descriptor_table_Iris_2eproto_once,
      file_level_metadata_Iris_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Iris
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Iris::StatusCode*
Arena::CreateMaybeMessage< ::Iris::StatusCode >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Iris::StatusCode >(arena);
}
template<> PROTOBUF_NOINLINE ::Iris::DataBuffer*
Arena::CreateMaybeMessage< ::Iris::DataBuffer >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Iris::DataBuffer >(arena);
}
template<> PROTOBUF_NOINLINE ::Iris::NetworkParameters*
Arena::CreateMaybeMessage< ::Iris::NetworkParameters >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Iris::NetworkParameters >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
