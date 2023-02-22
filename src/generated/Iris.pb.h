// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Iris.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Iris_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Iris_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/empty.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Iris_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Iris_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Iris_2eproto;
namespace Iris {
class DataBuffer;
struct DataBufferDefaultTypeInternal;
extern DataBufferDefaultTypeInternal _DataBuffer_default_instance_;
class NetworkParameters;
struct NetworkParametersDefaultTypeInternal;
extern NetworkParametersDefaultTypeInternal _NetworkParameters_default_instance_;
class SocketInfo;
struct SocketInfoDefaultTypeInternal;
extern SocketInfoDefaultTypeInternal _SocketInfo_default_instance_;
class StatusCode;
struct StatusCodeDefaultTypeInternal;
extern StatusCodeDefaultTypeInternal _StatusCode_default_instance_;
class VersionInfo;
struct VersionInfoDefaultTypeInternal;
extern VersionInfoDefaultTypeInternal _VersionInfo_default_instance_;
}  // namespace Iris
PROTOBUF_NAMESPACE_OPEN
template<> ::Iris::DataBuffer* Arena::CreateMaybeMessage<::Iris::DataBuffer>(Arena*);
template<> ::Iris::NetworkParameters* Arena::CreateMaybeMessage<::Iris::NetworkParameters>(Arena*);
template<> ::Iris::SocketInfo* Arena::CreateMaybeMessage<::Iris::SocketInfo>(Arena*);
template<> ::Iris::StatusCode* Arena::CreateMaybeMessage<::Iris::StatusCode>(Arena*);
template<> ::Iris::VersionInfo* Arena::CreateMaybeMessage<::Iris::VersionInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Iris {

enum StatusCode_Code : int {
  StatusCode_Code_OK = 0,
  StatusCode_Code_ERROR = 1,
  StatusCode_Code_StatusCode_Code_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  StatusCode_Code_StatusCode_Code_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool StatusCode_Code_IsValid(int value);
constexpr StatusCode_Code StatusCode_Code_Code_MIN = StatusCode_Code_OK;
constexpr StatusCode_Code StatusCode_Code_Code_MAX = StatusCode_Code_ERROR;
constexpr int StatusCode_Code_Code_ARRAYSIZE = StatusCode_Code_Code_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StatusCode_Code_descriptor();
template<typename T>
inline const std::string& StatusCode_Code_Name(T enum_t_value) {
  static_assert(::std::is_same<T, StatusCode_Code>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function StatusCode_Code_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    StatusCode_Code_descriptor(), enum_t_value);
}
inline bool StatusCode_Code_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, StatusCode_Code* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<StatusCode_Code>(
    StatusCode_Code_descriptor(), name, value);
}
// ===================================================================

class StatusCode final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Iris.StatusCode) */ {
 public:
  inline StatusCode() : StatusCode(nullptr) {}
  ~StatusCode() override;
  explicit PROTOBUF_CONSTEXPR StatusCode(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StatusCode(const StatusCode& from);
  StatusCode(StatusCode&& from) noexcept
    : StatusCode() {
    *this = ::std::move(from);
  }

  inline StatusCode& operator=(const StatusCode& from) {
    CopyFrom(from);
    return *this;
  }
  inline StatusCode& operator=(StatusCode&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StatusCode& default_instance() {
    return *internal_default_instance();
  }
  static inline const StatusCode* internal_default_instance() {
    return reinterpret_cast<const StatusCode*>(
               &_StatusCode_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StatusCode& a, StatusCode& b) {
    a.Swap(&b);
  }
  inline void Swap(StatusCode* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StatusCode* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StatusCode* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StatusCode>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StatusCode& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StatusCode& from) {
    StatusCode::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StatusCode* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Iris.StatusCode";
  }
  protected:
  explicit StatusCode(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef StatusCode_Code Code;
  static constexpr Code OK =
    StatusCode_Code_OK;
  static constexpr Code ERROR =
    StatusCode_Code_ERROR;
  static inline bool Code_IsValid(int value) {
    return StatusCode_Code_IsValid(value);
  }
  static constexpr Code Code_MIN =
    StatusCode_Code_Code_MIN;
  static constexpr Code Code_MAX =
    StatusCode_Code_Code_MAX;
  static constexpr int Code_ARRAYSIZE =
    StatusCode_Code_Code_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Code_descriptor() {
    return StatusCode_Code_descriptor();
  }
  template<typename T>
  static inline const std::string& Code_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Code>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Code_Name.");
    return StatusCode_Code_Name(enum_t_value);
  }
  static inline bool Code_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Code* value) {
    return StatusCode_Code_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kStatusFieldNumber = 1,
  };
  // .Iris.StatusCode.Code status = 1;
  void clear_status();
  ::Iris::StatusCode_Code status() const;
  void set_status(::Iris::StatusCode_Code value);
  private:
  ::Iris::StatusCode_Code _internal_status() const;
  void _internal_set_status(::Iris::StatusCode_Code value);
  public:

  // @@protoc_insertion_point(class_scope:Iris.StatusCode)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int status_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Iris_2eproto;
};
// -------------------------------------------------------------------

class DataBuffer final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Iris.DataBuffer) */ {
 public:
  inline DataBuffer() : DataBuffer(nullptr) {}
  ~DataBuffer() override;
  explicit PROTOBUF_CONSTEXPR DataBuffer(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DataBuffer(const DataBuffer& from);
  DataBuffer(DataBuffer&& from) noexcept
    : DataBuffer() {
    *this = ::std::move(from);
  }

  inline DataBuffer& operator=(const DataBuffer& from) {
    CopyFrom(from);
    return *this;
  }
  inline DataBuffer& operator=(DataBuffer&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const DataBuffer& default_instance() {
    return *internal_default_instance();
  }
  static inline const DataBuffer* internal_default_instance() {
    return reinterpret_cast<const DataBuffer*>(
               &_DataBuffer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(DataBuffer& a, DataBuffer& b) {
    a.Swap(&b);
  }
  inline void Swap(DataBuffer* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DataBuffer* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  DataBuffer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<DataBuffer>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const DataBuffer& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const DataBuffer& from) {
    DataBuffer::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DataBuffer* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Iris.DataBuffer";
  }
  protected:
  explicit DataBuffer(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 1,
    kSockPortFieldNumber = 2,
  };
  // bytes data = 1;
  void clear_data();
  const std::string& data() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_data(ArgT0&& arg0, ArgT... args);
  std::string* mutable_data();
  PROTOBUF_NODISCARD std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // uint32 sock_port = 2;
  void clear_sock_port();
  uint32_t sock_port() const;
  void set_sock_port(uint32_t value);
  private:
  uint32_t _internal_sock_port() const;
  void _internal_set_sock_port(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Iris.DataBuffer)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
    uint32_t sock_port_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Iris_2eproto;
};
// -------------------------------------------------------------------

class NetworkParameters final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Iris.NetworkParameters) */ {
 public:
  inline NetworkParameters() : NetworkParameters(nullptr) {}
  ~NetworkParameters() override;
  explicit PROTOBUF_CONSTEXPR NetworkParameters(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NetworkParameters(const NetworkParameters& from);
  NetworkParameters(NetworkParameters&& from) noexcept
    : NetworkParameters() {
    *this = ::std::move(from);
  }

  inline NetworkParameters& operator=(const NetworkParameters& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetworkParameters& operator=(NetworkParameters&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NetworkParameters& default_instance() {
    return *internal_default_instance();
  }
  static inline const NetworkParameters* internal_default_instance() {
    return reinterpret_cast<const NetworkParameters*>(
               &_NetworkParameters_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(NetworkParameters& a, NetworkParameters& b) {
    a.Swap(&b);
  }
  inline void Swap(NetworkParameters* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NetworkParameters* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NetworkParameters* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NetworkParameters>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const NetworkParameters& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const NetworkParameters& from) {
    NetworkParameters::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NetworkParameters* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Iris.NetworkParameters";
  }
  protected:
  explicit NetworkParameters(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFrameLossProbabilityFieldNumber = 1,
  };
  // float frameLossProbability = 1;
  void clear_framelossprobability();
  float framelossprobability() const;
  void set_framelossprobability(float value);
  private:
  float _internal_framelossprobability() const;
  void _internal_set_framelossprobability(float value);
  public:

  // @@protoc_insertion_point(class_scope:Iris.NetworkParameters)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    float framelossprobability_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Iris_2eproto;
};
// -------------------------------------------------------------------

class SocketInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Iris.SocketInfo) */ {
 public:
  inline SocketInfo() : SocketInfo(nullptr) {}
  ~SocketInfo() override;
  explicit PROTOBUF_CONSTEXPR SocketInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SocketInfo(const SocketInfo& from);
  SocketInfo(SocketInfo&& from) noexcept
    : SocketInfo() {
    *this = ::std::move(from);
  }

  inline SocketInfo& operator=(const SocketInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline SocketInfo& operator=(SocketInfo&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SocketInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const SocketInfo* internal_default_instance() {
    return reinterpret_cast<const SocketInfo*>(
               &_SocketInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(SocketInfo& a, SocketInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(SocketInfo* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SocketInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SocketInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SocketInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SocketInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SocketInfo& from) {
    SocketInfo::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SocketInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Iris.SocketInfo";
  }
  protected:
  explicit SocketInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSockPortFieldNumber = 1,
  };
  // uint32 sock_port = 1;
  void clear_sock_port();
  uint32_t sock_port() const;
  void set_sock_port(uint32_t value);
  private:
  uint32_t _internal_sock_port() const;
  void _internal_set_sock_port(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Iris.SocketInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint32_t sock_port_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Iris_2eproto;
};
// -------------------------------------------------------------------

class VersionInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Iris.VersionInfo) */ {
 public:
  inline VersionInfo() : VersionInfo(nullptr) {}
  ~VersionInfo() override;
  explicit PROTOBUF_CONSTEXPR VersionInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  VersionInfo(const VersionInfo& from);
  VersionInfo(VersionInfo&& from) noexcept
    : VersionInfo() {
    *this = ::std::move(from);
  }

  inline VersionInfo& operator=(const VersionInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline VersionInfo& operator=(VersionInfo&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const VersionInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const VersionInfo* internal_default_instance() {
    return reinterpret_cast<const VersionInfo*>(
               &_VersionInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    4;

  friend void swap(VersionInfo& a, VersionInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(VersionInfo* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(VersionInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  VersionInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<VersionInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const VersionInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const VersionInfo& from) {
    VersionInfo::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VersionInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Iris.VersionInfo";
  }
  protected:
  explicit VersionInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVersionFieldNumber = 1,
  };
  // string version = 1;
  void clear_version();
  const std::string& version() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_version(ArgT0&& arg0, ArgT... args);
  std::string* mutable_version();
  PROTOBUF_NODISCARD std::string* release_version();
  void set_allocated_version(std::string* version);
  private:
  const std::string& _internal_version() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_version(const std::string& value);
  std::string* _internal_mutable_version();
  public:

  // @@protoc_insertion_point(class_scope:Iris.VersionInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr version_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Iris_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StatusCode

// .Iris.StatusCode.Code status = 1;
inline void StatusCode::clear_status() {
  _impl_.status_ = 0;
}
inline ::Iris::StatusCode_Code StatusCode::_internal_status() const {
  return static_cast< ::Iris::StatusCode_Code >(_impl_.status_);
}
inline ::Iris::StatusCode_Code StatusCode::status() const {
  // @@protoc_insertion_point(field_get:Iris.StatusCode.status)
  return _internal_status();
}
inline void StatusCode::_internal_set_status(::Iris::StatusCode_Code value) {
  
  _impl_.status_ = value;
}
inline void StatusCode::set_status(::Iris::StatusCode_Code value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:Iris.StatusCode.status)
}

// -------------------------------------------------------------------

// DataBuffer

// bytes data = 1;
inline void DataBuffer::clear_data() {
  _impl_.data_.ClearToEmpty();
}
inline const std::string& DataBuffer::data() const {
  // @@protoc_insertion_point(field_get:Iris.DataBuffer.data)
  return _internal_data();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void DataBuffer::set_data(ArgT0&& arg0, ArgT... args) {
 
 _impl_.data_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Iris.DataBuffer.data)
}
inline std::string* DataBuffer::mutable_data() {
  std::string* _s = _internal_mutable_data();
  // @@protoc_insertion_point(field_mutable:Iris.DataBuffer.data)
  return _s;
}
inline const std::string& DataBuffer::_internal_data() const {
  return _impl_.data_.Get();
}
inline void DataBuffer::_internal_set_data(const std::string& value) {
  
  _impl_.data_.Set(value, GetArenaForAllocation());
}
inline std::string* DataBuffer::_internal_mutable_data() {
  
  return _impl_.data_.Mutable(GetArenaForAllocation());
}
inline std::string* DataBuffer::release_data() {
  // @@protoc_insertion_point(field_release:Iris.DataBuffer.data)
  return _impl_.data_.Release();
}
inline void DataBuffer::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    
  } else {
    
  }
  _impl_.data_.SetAllocated(data, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.data_.IsDefault()) {
    _impl_.data_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Iris.DataBuffer.data)
}

// uint32 sock_port = 2;
inline void DataBuffer::clear_sock_port() {
  _impl_.sock_port_ = 0u;
}
inline uint32_t DataBuffer::_internal_sock_port() const {
  return _impl_.sock_port_;
}
inline uint32_t DataBuffer::sock_port() const {
  // @@protoc_insertion_point(field_get:Iris.DataBuffer.sock_port)
  return _internal_sock_port();
}
inline void DataBuffer::_internal_set_sock_port(uint32_t value) {
  
  _impl_.sock_port_ = value;
}
inline void DataBuffer::set_sock_port(uint32_t value) {
  _internal_set_sock_port(value);
  // @@protoc_insertion_point(field_set:Iris.DataBuffer.sock_port)
}

// -------------------------------------------------------------------

// NetworkParameters

// float frameLossProbability = 1;
inline void NetworkParameters::clear_framelossprobability() {
  _impl_.framelossprobability_ = 0;
}
inline float NetworkParameters::_internal_framelossprobability() const {
  return _impl_.framelossprobability_;
}
inline float NetworkParameters::framelossprobability() const {
  // @@protoc_insertion_point(field_get:Iris.NetworkParameters.frameLossProbability)
  return _internal_framelossprobability();
}
inline void NetworkParameters::_internal_set_framelossprobability(float value) {
  
  _impl_.framelossprobability_ = value;
}
inline void NetworkParameters::set_framelossprobability(float value) {
  _internal_set_framelossprobability(value);
  // @@protoc_insertion_point(field_set:Iris.NetworkParameters.frameLossProbability)
}

// -------------------------------------------------------------------

// SocketInfo

// uint32 sock_port = 1;
inline void SocketInfo::clear_sock_port() {
  _impl_.sock_port_ = 0u;
}
inline uint32_t SocketInfo::_internal_sock_port() const {
  return _impl_.sock_port_;
}
inline uint32_t SocketInfo::sock_port() const {
  // @@protoc_insertion_point(field_get:Iris.SocketInfo.sock_port)
  return _internal_sock_port();
}
inline void SocketInfo::_internal_set_sock_port(uint32_t value) {
  
  _impl_.sock_port_ = value;
}
inline void SocketInfo::set_sock_port(uint32_t value) {
  _internal_set_sock_port(value);
  // @@protoc_insertion_point(field_set:Iris.SocketInfo.sock_port)
}

// -------------------------------------------------------------------

// VersionInfo

// string version = 1;
inline void VersionInfo::clear_version() {
  _impl_.version_.ClearToEmpty();
}
inline const std::string& VersionInfo::version() const {
  // @@protoc_insertion_point(field_get:Iris.VersionInfo.version)
  return _internal_version();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void VersionInfo::set_version(ArgT0&& arg0, ArgT... args) {
 
 _impl_.version_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Iris.VersionInfo.version)
}
inline std::string* VersionInfo::mutable_version() {
  std::string* _s = _internal_mutable_version();
  // @@protoc_insertion_point(field_mutable:Iris.VersionInfo.version)
  return _s;
}
inline const std::string& VersionInfo::_internal_version() const {
  return _impl_.version_.Get();
}
inline void VersionInfo::_internal_set_version(const std::string& value) {
  
  _impl_.version_.Set(value, GetArenaForAllocation());
}
inline std::string* VersionInfo::_internal_mutable_version() {
  
  return _impl_.version_.Mutable(GetArenaForAllocation());
}
inline std::string* VersionInfo::release_version() {
  // @@protoc_insertion_point(field_release:Iris.VersionInfo.version)
  return _impl_.version_.Release();
}
inline void VersionInfo::set_allocated_version(std::string* version) {
  if (version != nullptr) {
    
  } else {
    
  }
  _impl_.version_.SetAllocated(version, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.version_.IsDefault()) {
    _impl_.version_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Iris.VersionInfo.version)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Iris

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Iris::StatusCode_Code> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Iris::StatusCode_Code>() {
  return ::Iris::StatusCode_Code_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Iris_2eproto
