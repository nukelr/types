// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fee.proto

#include "fee.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace legacy_pb {
class FeeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Fee> _instance;
} _Fee_default_instance_;
}  // namespace legacy_pb
static void InitDefaultsFee_fee_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::legacy_pb::_Fee_default_instance_;
    new (ptr) ::legacy_pb::Fee();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::legacy_pb::Fee::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Fee_fee_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsFee_fee_2eproto}, {}};

void InitDefaults_fee_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Fee_fee_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_fee_2eproto[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors_fee_2eproto[2];
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_fee_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_fee_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::legacy_pb::Fee, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::legacy_pb::Fee, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::legacy_pb::Fee, version_),
  PROTOBUF_FIELD_OFFSET(::legacy_pb::Fee, currency_),
  PROTOBUF_FIELD_OFFSET(::legacy_pb::Fee, address_),
  PROTOBUF_FIELD_OFFSET(::legacy_pb::Fee, amount_),
  1,
  2,
  0,
  3,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::legacy_pb::Fee)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::legacy_pb::_Fee_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_fee_2eproto = {
  {}, AddDescriptors_fee_2eproto, "fee.proto", schemas,
  file_default_instances, TableStruct_fee_2eproto::offsets,
  file_level_metadata_fee_2eproto, 1, file_level_enum_descriptors_fee_2eproto, file_level_service_descriptors_fee_2eproto,
};

const char descriptor_table_protodef_fee_2eproto[] =
  "\n\tfee.proto\022\tlegacy_pb\"\343\001\n\003Fee\022\'\n\007versio"
  "n\030\001 \002(\0162\026.legacy_pb.Fee.Version\022)\n\010curre"
  "ncy\030\002 \002(\0162\027.legacy_pb.Fee.Currency\022\017\n\007ad"
  "dress\030\003 \002(\014\022\016\n\006amount\030\004 \002(\002\"*\n\007Version\022\023"
  "\n\017UNKNOWN_VERSION\020\000\022\n\n\006_0_0_1\020\001\";\n\010Curre"
  "ncy\022\024\n\020UNKNOWN_CURRENCY\020\000\022\007\n\003LBC\020\001\022\007\n\003BT"
  "C\020\002\022\007\n\003USD\020\003"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_fee_2eproto = {
  false, InitDefaults_fee_2eproto, 
  descriptor_table_protodef_fee_2eproto,
  "fee.proto", &assign_descriptors_table_fee_2eproto, 252,
};

void AddDescriptors_fee_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_fee_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_fee_2eproto = []() { AddDescriptors_fee_2eproto(); return true; }();
namespace legacy_pb {
const ::google::protobuf::EnumDescriptor* Fee_Version_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_fee_2eproto);
  return file_level_enum_descriptors_fee_2eproto[0];
}
bool Fee_Version_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Fee_Version Fee::UNKNOWN_VERSION;
const Fee_Version Fee::_0_0_1;
const Fee_Version Fee::Version_MIN;
const Fee_Version Fee::Version_MAX;
const int Fee::Version_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* Fee_Currency_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_fee_2eproto);
  return file_level_enum_descriptors_fee_2eproto[1];
}
bool Fee_Currency_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Fee_Currency Fee::UNKNOWN_CURRENCY;
const Fee_Currency Fee::LBC;
const Fee_Currency Fee::BTC;
const Fee_Currency Fee::USD;
const Fee_Currency Fee::Currency_MIN;
const Fee_Currency Fee::Currency_MAX;
const int Fee::Currency_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Fee::InitAsDefaultInstance() {
}
class Fee::HasBitSetters {
 public:
  static void set_has_version(Fee* msg) {
    msg->_has_bits_[0] |= 0x00000002u;
  }
  static void set_has_currency(Fee* msg) {
    msg->_has_bits_[0] |= 0x00000004u;
  }
  static void set_has_address(Fee* msg) {
    msg->_has_bits_[0] |= 0x00000001u;
  }
  static void set_has_amount(Fee* msg) {
    msg->_has_bits_[0] |= 0x00000008u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Fee::kVersionFieldNumber;
const int Fee::kCurrencyFieldNumber;
const int Fee::kAddressFieldNumber;
const int Fee::kAmountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Fee::Fee()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:legacy_pb.Fee)
}
Fee::Fee(const Fee& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_address()) {
    address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.address_);
  }
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&amount_) -
    reinterpret_cast<char*>(&version_)) + sizeof(amount_));
  // @@protoc_insertion_point(copy_constructor:legacy_pb.Fee)
}

void Fee::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Fee_fee_2eproto.base);
  address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&amount_) -
      reinterpret_cast<char*>(&version_)) + sizeof(amount_));
}

Fee::~Fee() {
  // @@protoc_insertion_point(destructor:legacy_pb.Fee)
  SharedDtor();
}

void Fee::SharedDtor() {
  address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Fee::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Fee& Fee::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Fee_fee_2eproto.base);
  return *internal_default_instance();
}


void Fee::Clear() {
// @@protoc_insertion_point(message_clear_start:legacy_pb.Fee)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    address_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 0x0000000eu) {
    ::memset(&version_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&amount_) -
        reinterpret_cast<char*>(&version_)) + sizeof(amount_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Fee::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Fee*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // required .legacy_pb.Fee.Version version = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        ::google::protobuf::uint64 val = ::google::protobuf::internal::ReadVarint(&ptr);
        if (!::legacy_pb::Fee_Version_IsValid(val)) {
          ::google::protobuf::internal::WriteVarint(1, val, msg->mutable_unknown_fields());
          break;
        }
        msg->set_version(static_cast<::legacy_pb::Fee_Version>(val));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // required .legacy_pb.Fee.Currency currency = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        ::google::protobuf::uint64 val = ::google::protobuf::internal::ReadVarint(&ptr);
        if (!::legacy_pb::Fee_Currency_IsValid(val)) {
          ::google::protobuf::internal::WriteVarint(2, val, msg->mutable_unknown_fields());
          break;
        }
        msg->set_currency(static_cast<::legacy_pb::Fee_Currency>(val));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // required bytes address = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        object = msg->mutable_address();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParser;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheck(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // required float amount = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 37) goto handle_unusual;
        msg->set_amount(::google::protobuf::io::UnalignedLoad<float>(ptr));
        ptr += sizeof(float);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Fee::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:legacy_pb.Fee)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .legacy_pb.Fee.Version version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {
          int value = 0;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::legacy_pb::Fee_Version_IsValid(value)) {
            set_version(static_cast< ::legacy_pb::Fee_Version >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast<::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required .legacy_pb.Fee.Currency currency = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {
          int value = 0;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::legacy_pb::Fee_Currency_IsValid(value)) {
            set_currency(static_cast< ::legacy_pb::Fee_Currency >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                2, static_cast<::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bytes address = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_address()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required float amount = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (37 & 0xFF)) {
          HasBitSetters::set_has_amount(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &amount_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:legacy_pb.Fee)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:legacy_pb.Fee)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Fee::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:legacy_pb.Fee)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .legacy_pb.Fee.Version version = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->version(), output);
  }

  // required .legacy_pb.Fee.Currency currency = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->currency(), output);
  }

  // required bytes address = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->address(), output);
  }

  // required float amount = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->amount(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:legacy_pb.Fee)
}

::google::protobuf::uint8* Fee::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:legacy_pb.Fee)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .legacy_pb.Fee.Version version = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->version(), target);
  }

  // required .legacy_pb.Fee.Currency currency = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->currency(), target);
  }

  // required bytes address = 3;
  if (cached_has_bits & 0x00000001u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->address(), target);
  }

  // required float amount = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->amount(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:legacy_pb.Fee)
  return target;
}

size_t Fee::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:legacy_pb.Fee)
  size_t total_size = 0;

  if (has_address()) {
    // required bytes address = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->address());
  }

  if (has_version()) {
    // required .legacy_pb.Fee.Version version = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->version());
  }

  if (has_currency()) {
    // required .legacy_pb.Fee.Currency currency = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->currency());
  }

  if (has_amount()) {
    // required float amount = 4;
    total_size += 1 + 4;
  }

  return total_size;
}
size_t Fee::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:legacy_pb.Fee)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required bytes address = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->address());

    // required .legacy_pb.Fee.Version version = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->version());

    // required .legacy_pb.Fee.Currency currency = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->currency());

    // required float amount = 4;
    total_size += 1 + 4;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Fee::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:legacy_pb.Fee)
  GOOGLE_DCHECK_NE(&from, this);
  const Fee* source =
      ::google::protobuf::DynamicCastToGenerated<Fee>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:legacy_pb.Fee)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:legacy_pb.Fee)
    MergeFrom(*source);
  }
}

void Fee::MergeFrom(const Fee& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:legacy_pb.Fee)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.address_);
    }
    if (cached_has_bits & 0x00000002u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000004u) {
      currency_ = from.currency_;
    }
    if (cached_has_bits & 0x00000008u) {
      amount_ = from.amount_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Fee::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:legacy_pb.Fee)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Fee::CopyFrom(const Fee& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:legacy_pb.Fee)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Fee::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;
  return true;
}

void Fee::Swap(Fee* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Fee::InternalSwap(Fee* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  address_.Swap(&other->address_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(version_, other->version_);
  swap(currency_, other->currency_);
  swap(amount_, other->amount_);
}

::google::protobuf::Metadata Fee::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_fee_2eproto);
  return ::file_level_metadata_fee_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace legacy_pb
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::legacy_pb::Fee* Arena::CreateMaybeMessage< ::legacy_pb::Fee >(Arena* arena) {
  return Arena::CreateInternal< ::legacy_pb::Fee >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
