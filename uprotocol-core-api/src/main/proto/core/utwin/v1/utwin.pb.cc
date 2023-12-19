// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: core/utwin/v1/utwin.proto

#include "core/utwin/v1/utwin.pb.h"

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

namespace uprotocol {
namespace core {
namespace utwin {
namespace v1 {
PROTOBUF_CONSTEXPR GetLastEventResponse::GetLastEventResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.topic_)*/nullptr
  , /*decltype(_impl_.status_)*/nullptr
  , /*decltype(_impl_.event_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GetLastEventResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetLastEventResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetLastEventResponseDefaultTypeInternal() {}
  union {
    GetLastEventResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetLastEventResponseDefaultTypeInternal _GetLastEventResponse_default_instance_;
PROTOBUF_CONSTEXPR GetLastEventsResponse::GetLastEventsResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.responses_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GetLastEventsResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetLastEventsResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetLastEventsResponseDefaultTypeInternal() {}
  union {
    GetLastEventsResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetLastEventsResponseDefaultTypeInternal _GetLastEventsResponse_default_instance_;
}  // namespace v1
}  // namespace utwin
}  // namespace core
}  // namespace uprotocol
static ::_pb::Metadata file_level_metadata_core_2futwin_2fv1_2futwin_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_core_2futwin_2fv1_2futwin_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_core_2futwin_2fv1_2futwin_2eproto = nullptr;

const uint32_t TableStruct_core_2futwin_2fv1_2futwin_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::uprotocol::core::utwin::v1::GetLastEventResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::uprotocol::core::utwin::v1::GetLastEventResponse, _impl_.topic_),
  PROTOBUF_FIELD_OFFSET(::uprotocol::core::utwin::v1::GetLastEventResponse, _impl_.status_),
  PROTOBUF_FIELD_OFFSET(::uprotocol::core::utwin::v1::GetLastEventResponse, _impl_.event_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::uprotocol::core::utwin::v1::GetLastEventsResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::uprotocol::core::utwin::v1::GetLastEventsResponse, _impl_.responses_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::uprotocol::core::utwin::v1::GetLastEventResponse)},
  { 9, -1, -1, sizeof(::uprotocol::core::utwin::v1::GetLastEventsResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::uprotocol::core::utwin::v1::_GetLastEventResponse_default_instance_._instance,
  &::uprotocol::core::utwin::v1::_GetLastEventsResponse_default_instance_._instance,
};

const char descriptor_table_protodef_core_2futwin_2fv1_2futwin_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031core/utwin/v1/utwin.proto\022\027uprotocol.c"
  "ore.utwin.v1\032\027uprotocol_options.proto\032\ru"
  "status.proto\032\turi.proto\032\016umessage.proto\""
  "\207\001\n\024GetLastEventResponse\022!\n\005topic\030\001 \001(\0132"
  "\022.uprotocol.v1.UUri\022%\n\006status\030\002 \001(\0132\025.up"
  "rotocol.v1.UStatus\022%\n\005event\030\003 \001(\0132\026.upro"
  "tocol.v1.UMessage\"Y\n\025GetLastEventsRespon"
  "se\022@\n\tresponses\030\002 \003(\0132-.uprotocol.core.u"
  "twin.v1.GetLastEventResponse2\310\001\n\005uTwin\022^"
  "\n\rGetLastEvents\022\027.uprotocol.v1.UUriBatch"
  "\032..uprotocol.core.utwin.v1.GetLastEvents"
  "Response\"\004\300\301\030\001\022C\n\014SetLastEvent\022\026.uprotoc"
  "ol.v1.UMessage\032\025.uprotocol.v1.UStatus\"\004\300"
  "\301\030\002\032\032\242\273\030\ncore.utwin\250\273\030\001\260\273\030\000\270\273\030\032B3\n#org.e"
  "clipse.uprotocol.core.utwin.v1B\nUTwinPro"
  "toP\001b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_core_2futwin_2fv1_2futwin_2eproto_deps[4] = {
  &::descriptor_table_umessage_2eproto,
  &::descriptor_table_uprotocol_5foptions_2eproto,
  &::descriptor_table_uri_2eproto,
  &::descriptor_table_ustatus_2eproto,
};
static ::_pbi::once_flag descriptor_table_core_2futwin_2fv1_2futwin_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_core_2futwin_2fv1_2futwin_2eproto = {
    false, false, 612, descriptor_table_protodef_core_2futwin_2fv1_2futwin_2eproto,
    "core/utwin/v1/utwin.proto",
    &descriptor_table_core_2futwin_2fv1_2futwin_2eproto_once, descriptor_table_core_2futwin_2fv1_2futwin_2eproto_deps, 4, 2,
    schemas, file_default_instances, TableStruct_core_2futwin_2fv1_2futwin_2eproto::offsets,
    file_level_metadata_core_2futwin_2fv1_2futwin_2eproto, file_level_enum_descriptors_core_2futwin_2fv1_2futwin_2eproto,
    file_level_service_descriptors_core_2futwin_2fv1_2futwin_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_core_2futwin_2fv1_2futwin_2eproto_getter() {
  return &descriptor_table_core_2futwin_2fv1_2futwin_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_core_2futwin_2fv1_2futwin_2eproto(&descriptor_table_core_2futwin_2fv1_2futwin_2eproto);
namespace uprotocol {
namespace core {
namespace utwin {
namespace v1 {

// ===================================================================

class GetLastEventResponse::_Internal {
 public:
  static const ::uprotocol::v1::UUri& topic(const GetLastEventResponse* msg);
  static const ::uprotocol::v1::UStatus& status(const GetLastEventResponse* msg);
  static const ::uprotocol::v1::UMessage& event(const GetLastEventResponse* msg);
};

const ::uprotocol::v1::UUri&
GetLastEventResponse::_Internal::topic(const GetLastEventResponse* msg) {
  return *msg->_impl_.topic_;
}
const ::uprotocol::v1::UStatus&
GetLastEventResponse::_Internal::status(const GetLastEventResponse* msg) {
  return *msg->_impl_.status_;
}
const ::uprotocol::v1::UMessage&
GetLastEventResponse::_Internal::event(const GetLastEventResponse* msg) {
  return *msg->_impl_.event_;
}
void GetLastEventResponse::clear_topic() {
  if (GetArenaForAllocation() == nullptr && _impl_.topic_ != nullptr) {
    delete _impl_.topic_;
  }
  _impl_.topic_ = nullptr;
}
void GetLastEventResponse::clear_status() {
  if (GetArenaForAllocation() == nullptr && _impl_.status_ != nullptr) {
    delete _impl_.status_;
  }
  _impl_.status_ = nullptr;
}
void GetLastEventResponse::clear_event() {
  if (GetArenaForAllocation() == nullptr && _impl_.event_ != nullptr) {
    delete _impl_.event_;
  }
  _impl_.event_ = nullptr;
}
GetLastEventResponse::GetLastEventResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:uprotocol.core.utwin.v1.GetLastEventResponse)
}
GetLastEventResponse::GetLastEventResponse(const GetLastEventResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GetLastEventResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.topic_){nullptr}
    , decltype(_impl_.status_){nullptr}
    , decltype(_impl_.event_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_topic()) {
    _this->_impl_.topic_ = new ::uprotocol::v1::UUri(*from._impl_.topic_);
  }
  if (from._internal_has_status()) {
    _this->_impl_.status_ = new ::uprotocol::v1::UStatus(*from._impl_.status_);
  }
  if (from._internal_has_event()) {
    _this->_impl_.event_ = new ::uprotocol::v1::UMessage(*from._impl_.event_);
  }
  // @@protoc_insertion_point(copy_constructor:uprotocol.core.utwin.v1.GetLastEventResponse)
}

inline void GetLastEventResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.topic_){nullptr}
    , decltype(_impl_.status_){nullptr}
    , decltype(_impl_.event_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

GetLastEventResponse::~GetLastEventResponse() {
  // @@protoc_insertion_point(destructor:uprotocol.core.utwin.v1.GetLastEventResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GetLastEventResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.topic_;
  if (this != internal_default_instance()) delete _impl_.status_;
  if (this != internal_default_instance()) delete _impl_.event_;
}

void GetLastEventResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GetLastEventResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:uprotocol.core.utwin.v1.GetLastEventResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.topic_ != nullptr) {
    delete _impl_.topic_;
  }
  _impl_.topic_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.status_ != nullptr) {
    delete _impl_.status_;
  }
  _impl_.status_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.event_ != nullptr) {
    delete _impl_.event_;
  }
  _impl_.event_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetLastEventResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .uprotocol.v1.UUri topic = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_topic(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .uprotocol.v1.UStatus status = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_status(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .uprotocol.v1.UMessage event = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_event(), ptr);
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

uint8_t* GetLastEventResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:uprotocol.core.utwin.v1.GetLastEventResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .uprotocol.v1.UUri topic = 1;
  if (this->_internal_has_topic()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::topic(this),
        _Internal::topic(this).GetCachedSize(), target, stream);
  }

  // .uprotocol.v1.UStatus status = 2;
  if (this->_internal_has_status()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::status(this),
        _Internal::status(this).GetCachedSize(), target, stream);
  }

  // .uprotocol.v1.UMessage event = 3;
  if (this->_internal_has_event()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::event(this),
        _Internal::event(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:uprotocol.core.utwin.v1.GetLastEventResponse)
  return target;
}

size_t GetLastEventResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:uprotocol.core.utwin.v1.GetLastEventResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .uprotocol.v1.UUri topic = 1;
  if (this->_internal_has_topic()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.topic_);
  }

  // .uprotocol.v1.UStatus status = 2;
  if (this->_internal_has_status()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.status_);
  }

  // .uprotocol.v1.UMessage event = 3;
  if (this->_internal_has_event()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.event_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetLastEventResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GetLastEventResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetLastEventResponse::GetClassData() const { return &_class_data_; }


void GetLastEventResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GetLastEventResponse*>(&to_msg);
  auto& from = static_cast<const GetLastEventResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:uprotocol.core.utwin.v1.GetLastEventResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_topic()) {
    _this->_internal_mutable_topic()->::uprotocol::v1::UUri::MergeFrom(
        from._internal_topic());
  }
  if (from._internal_has_status()) {
    _this->_internal_mutable_status()->::uprotocol::v1::UStatus::MergeFrom(
        from._internal_status());
  }
  if (from._internal_has_event()) {
    _this->_internal_mutable_event()->::uprotocol::v1::UMessage::MergeFrom(
        from._internal_event());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GetLastEventResponse::CopyFrom(const GetLastEventResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:uprotocol.core.utwin.v1.GetLastEventResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetLastEventResponse::IsInitialized() const {
  return true;
}

void GetLastEventResponse::InternalSwap(GetLastEventResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GetLastEventResponse, _impl_.event_)
      + sizeof(GetLastEventResponse::_impl_.event_)
      - PROTOBUF_FIELD_OFFSET(GetLastEventResponse, _impl_.topic_)>(
          reinterpret_cast<char*>(&_impl_.topic_),
          reinterpret_cast<char*>(&other->_impl_.topic_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GetLastEventResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_core_2futwin_2fv1_2futwin_2eproto_getter, &descriptor_table_core_2futwin_2fv1_2futwin_2eproto_once,
      file_level_metadata_core_2futwin_2fv1_2futwin_2eproto[0]);
}

// ===================================================================

class GetLastEventsResponse::_Internal {
 public:
};

GetLastEventsResponse::GetLastEventsResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:uprotocol.core.utwin.v1.GetLastEventsResponse)
}
GetLastEventsResponse::GetLastEventsResponse(const GetLastEventsResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GetLastEventsResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.responses_){from._impl_.responses_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:uprotocol.core.utwin.v1.GetLastEventsResponse)
}

inline void GetLastEventsResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.responses_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

GetLastEventsResponse::~GetLastEventsResponse() {
  // @@protoc_insertion_point(destructor:uprotocol.core.utwin.v1.GetLastEventsResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GetLastEventsResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.responses_.~RepeatedPtrField();
}

void GetLastEventsResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GetLastEventsResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:uprotocol.core.utwin.v1.GetLastEventsResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.responses_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetLastEventsResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .uprotocol.core.utwin.v1.GetLastEventResponse responses = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_responses(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* GetLastEventsResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:uprotocol.core.utwin.v1.GetLastEventsResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .uprotocol.core.utwin.v1.GetLastEventResponse responses = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_responses_size()); i < n; i++) {
    const auto& repfield = this->_internal_responses(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:uprotocol.core.utwin.v1.GetLastEventsResponse)
  return target;
}

size_t GetLastEventsResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:uprotocol.core.utwin.v1.GetLastEventsResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .uprotocol.core.utwin.v1.GetLastEventResponse responses = 2;
  total_size += 1UL * this->_internal_responses_size();
  for (const auto& msg : this->_impl_.responses_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetLastEventsResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GetLastEventsResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetLastEventsResponse::GetClassData() const { return &_class_data_; }


void GetLastEventsResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GetLastEventsResponse*>(&to_msg);
  auto& from = static_cast<const GetLastEventsResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:uprotocol.core.utwin.v1.GetLastEventsResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.responses_.MergeFrom(from._impl_.responses_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GetLastEventsResponse::CopyFrom(const GetLastEventsResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:uprotocol.core.utwin.v1.GetLastEventsResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetLastEventsResponse::IsInitialized() const {
  return true;
}

void GetLastEventsResponse::InternalSwap(GetLastEventsResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.responses_.InternalSwap(&other->_impl_.responses_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GetLastEventsResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_core_2futwin_2fv1_2futwin_2eproto_getter, &descriptor_table_core_2futwin_2fv1_2futwin_2eproto_once,
      file_level_metadata_core_2futwin_2fv1_2futwin_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace utwin
}  // namespace core
}  // namespace uprotocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::uprotocol::core::utwin::v1::GetLastEventResponse*
Arena::CreateMaybeMessage< ::uprotocol::core::utwin::v1::GetLastEventResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::uprotocol::core::utwin::v1::GetLastEventResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::uprotocol::core::utwin::v1::GetLastEventsResponse*
Arena::CreateMaybeMessage< ::uprotocol::core::utwin::v1::GetLastEventsResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::uprotocol::core::utwin::v1::GetLastEventsResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>