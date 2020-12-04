// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "test.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace fixbug {

namespace {

const ::google::protobuf::Descriptor* LoginRquest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoginRquest_reflection_ = NULL;
const ::google::protobuf::Descriptor* LoginResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoginResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_test_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_test_2eproto() {
  protobuf_AddDesc_test_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "test.proto");
  GOOGLE_CHECK(file != NULL);
  LoginRquest_descriptor_ = file->message_type(0);
  static const int LoginRquest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRquest, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRquest, pwd_),
  };
  LoginRquest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      LoginRquest_descriptor_,
      LoginRquest::default_instance_,
      LoginRquest_offsets_,
      -1,
      -1,
      -1,
      sizeof(LoginRquest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRquest, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRquest, _is_default_instance_));
  LoginResponse_descriptor_ = file->message_type(1);
  static const int LoginResponse_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResponse, errorcode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResponse, errmsg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResponse, success_),
  };
  LoginResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      LoginResponse_descriptor_,
      LoginResponse::default_instance_,
      LoginResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(LoginResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResponse, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_test_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      LoginRquest_descriptor_, &LoginRquest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      LoginResponse_descriptor_, &LoginResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_test_2eproto() {
  delete LoginRquest::default_instance_;
  delete LoginRquest_reflection_;
  delete LoginResponse::default_instance_;
  delete LoginResponse_reflection_;
}

void protobuf_AddDesc_test_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_test_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ntest.proto\022\006fixbug\"(\n\013LoginRquest\022\014\n\004n"
    "ame\030\001 \001(\t\022\013\n\003pwd\030\002 \001(\t\"C\n\rLoginResponse\022"
    "\021\n\terrorcode\030\001 \001(\005\022\016\n\006errmsg\030\002 \001(\t\022\017\n\007su"
    "ccess\030\003 \001(\010b\006proto3", 139);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test.proto", &protobuf_RegisterTypes);
  LoginRquest::default_instance_ = new LoginRquest();
  LoginResponse::default_instance_ = new LoginResponse();
  LoginRquest::default_instance_->InitAsDefaultInstance();
  LoginResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_test_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_test_2eproto {
  StaticDescriptorInitializer_test_2eproto() {
    protobuf_AddDesc_test_2eproto();
  }
} static_descriptor_initializer_test_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LoginRquest::kNameFieldNumber;
const int LoginRquest::kPwdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LoginRquest::LoginRquest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fixbug.LoginRquest)
}

void LoginRquest::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

LoginRquest::LoginRquest(const LoginRquest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:fixbug.LoginRquest)
}

void LoginRquest::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pwd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

LoginRquest::~LoginRquest() {
  // @@protoc_insertion_point(destructor:fixbug.LoginRquest)
  SharedDtor();
}

void LoginRquest::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pwd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void LoginRquest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginRquest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoginRquest_descriptor_;
}

const LoginRquest& LoginRquest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_test_2eproto();
  return *default_instance_;
}

LoginRquest* LoginRquest::default_instance_ = NULL;

LoginRquest* LoginRquest::New(::google::protobuf::Arena* arena) const {
  LoginRquest* n = new LoginRquest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LoginRquest::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.LoginRquest)
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pwd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LoginRquest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fixbug.LoginRquest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "fixbug.LoginRquest.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_pwd;
        break;
      }

      // optional string pwd = 2;
      case 2: {
        if (tag == 18) {
         parse_pwd:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_pwd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->pwd().data(), this->pwd().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "fixbug.LoginRquest.pwd"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fixbug.LoginRquest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fixbug.LoginRquest)
  return false;
#undef DO_
}

void LoginRquest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fixbug.LoginRquest)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "fixbug.LoginRquest.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string pwd = 2;
  if (this->pwd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->pwd().data(), this->pwd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "fixbug.LoginRquest.pwd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->pwd(), output);
  }

  // @@protoc_insertion_point(serialize_end:fixbug.LoginRquest)
}

::google::protobuf::uint8* LoginRquest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.LoginRquest)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "fixbug.LoginRquest.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional string pwd = 2;
  if (this->pwd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->pwd().data(), this->pwd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "fixbug.LoginRquest.pwd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->pwd(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:fixbug.LoginRquest)
  return target;
}

int LoginRquest::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.LoginRquest)
  int total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional string pwd = 2;
  if (this->pwd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->pwd());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LoginRquest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:fixbug.LoginRquest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const LoginRquest* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const LoginRquest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:fixbug.LoginRquest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:fixbug.LoginRquest)
    MergeFrom(*source);
  }
}

void LoginRquest::MergeFrom(const LoginRquest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.LoginRquest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.pwd().size() > 0) {

    pwd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pwd_);
  }
}

void LoginRquest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:fixbug.LoginRquest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginRquest::CopyFrom(const LoginRquest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.LoginRquest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginRquest::IsInitialized() const {

  return true;
}

void LoginRquest::Swap(LoginRquest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LoginRquest::InternalSwap(LoginRquest* other) {
  name_.Swap(&other->name_);
  pwd_.Swap(&other->pwd_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LoginRquest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoginRquest_descriptor_;
  metadata.reflection = LoginRquest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LoginRquest

// optional string name = 1;
void LoginRquest::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& LoginRquest::name() const {
  // @@protoc_insertion_point(field_get:fixbug.LoginRquest.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LoginRquest::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:fixbug.LoginRquest.name)
}
 void LoginRquest::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:fixbug.LoginRquest.name)
}
 void LoginRquest::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:fixbug.LoginRquest.name)
}
 ::std::string* LoginRquest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:fixbug.LoginRquest.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LoginRquest::release_name() {
  // @@protoc_insertion_point(field_release:fixbug.LoginRquest.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LoginRquest::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:fixbug.LoginRquest.name)
}

// optional string pwd = 2;
void LoginRquest::clear_pwd() {
  pwd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& LoginRquest::pwd() const {
  // @@protoc_insertion_point(field_get:fixbug.LoginRquest.pwd)
  return pwd_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LoginRquest::set_pwd(const ::std::string& value) {
  
  pwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:fixbug.LoginRquest.pwd)
}
 void LoginRquest::set_pwd(const char* value) {
  
  pwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:fixbug.LoginRquest.pwd)
}
 void LoginRquest::set_pwd(const char* value, size_t size) {
  
  pwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:fixbug.LoginRquest.pwd)
}
 ::std::string* LoginRquest::mutable_pwd() {
  
  // @@protoc_insertion_point(field_mutable:fixbug.LoginRquest.pwd)
  return pwd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LoginRquest::release_pwd() {
  // @@protoc_insertion_point(field_release:fixbug.LoginRquest.pwd)
  
  return pwd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LoginRquest::set_allocated_pwd(::std::string* pwd) {
  if (pwd != NULL) {
    
  } else {
    
  }
  pwd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), pwd);
  // @@protoc_insertion_point(field_set_allocated:fixbug.LoginRquest.pwd)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LoginResponse::kErrorcodeFieldNumber;
const int LoginResponse::kErrmsgFieldNumber;
const int LoginResponse::kSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LoginResponse::LoginResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fixbug.LoginResponse)
}

void LoginResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

LoginResponse::LoginResponse(const LoginResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:fixbug.LoginResponse)
}

void LoginResponse::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  errorcode_ = 0;
  errmsg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  success_ = false;
}

LoginResponse::~LoginResponse() {
  // @@protoc_insertion_point(destructor:fixbug.LoginResponse)
  SharedDtor();
}

void LoginResponse::SharedDtor() {
  errmsg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void LoginResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoginResponse_descriptor_;
}

const LoginResponse& LoginResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_test_2eproto();
  return *default_instance_;
}

LoginResponse* LoginResponse::default_instance_ = NULL;

LoginResponse* LoginResponse::New(::google::protobuf::Arena* arena) const {
  LoginResponse* n = new LoginResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LoginResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.LoginResponse)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(LoginResponse, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<LoginResponse*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(errorcode_, success_);
  errmsg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool LoginResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fixbug.LoginResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 errorcode = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &errorcode_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_errmsg;
        break;
      }

      // optional string errmsg = 2;
      case 2: {
        if (tag == 18) {
         parse_errmsg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_errmsg()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->errmsg().data(), this->errmsg().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "fixbug.LoginResponse.errmsg"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_success;
        break;
      }

      // optional bool success = 3;
      case 3: {
        if (tag == 24) {
         parse_success:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &success_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fixbug.LoginResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fixbug.LoginResponse)
  return false;
#undef DO_
}

void LoginResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fixbug.LoginResponse)
  // optional int32 errorcode = 1;
  if (this->errorcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->errorcode(), output);
  }

  // optional string errmsg = 2;
  if (this->errmsg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->errmsg().data(), this->errmsg().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "fixbug.LoginResponse.errmsg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->errmsg(), output);
  }

  // optional bool success = 3;
  if (this->success() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->success(), output);
  }

  // @@protoc_insertion_point(serialize_end:fixbug.LoginResponse)
}

::google::protobuf::uint8* LoginResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.LoginResponse)
  // optional int32 errorcode = 1;
  if (this->errorcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->errorcode(), target);
  }

  // optional string errmsg = 2;
  if (this->errmsg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->errmsg().data(), this->errmsg().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "fixbug.LoginResponse.errmsg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->errmsg(), target);
  }

  // optional bool success = 3;
  if (this->success() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->success(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:fixbug.LoginResponse)
  return target;
}

int LoginResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.LoginResponse)
  int total_size = 0;

  // optional int32 errorcode = 1;
  if (this->errorcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->errorcode());
  }

  // optional string errmsg = 2;
  if (this->errmsg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->errmsg());
  }

  // optional bool success = 3;
  if (this->success() != 0) {
    total_size += 1 + 1;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LoginResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:fixbug.LoginResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const LoginResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const LoginResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:fixbug.LoginResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:fixbug.LoginResponse)
    MergeFrom(*source);
  }
}

void LoginResponse::MergeFrom(const LoginResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.LoginResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.errorcode() != 0) {
    set_errorcode(from.errorcode());
  }
  if (from.errmsg().size() > 0) {

    errmsg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.errmsg_);
  }
  if (from.success() != 0) {
    set_success(from.success());
  }
}

void LoginResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:fixbug.LoginResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginResponse::CopyFrom(const LoginResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.LoginResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginResponse::IsInitialized() const {

  return true;
}

void LoginResponse::Swap(LoginResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LoginResponse::InternalSwap(LoginResponse* other) {
  std::swap(errorcode_, other->errorcode_);
  errmsg_.Swap(&other->errmsg_);
  std::swap(success_, other->success_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LoginResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoginResponse_descriptor_;
  metadata.reflection = LoginResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LoginResponse

// optional int32 errorcode = 1;
void LoginResponse::clear_errorcode() {
  errorcode_ = 0;
}
 ::google::protobuf::int32 LoginResponse::errorcode() const {
  // @@protoc_insertion_point(field_get:fixbug.LoginResponse.errorcode)
  return errorcode_;
}
 void LoginResponse::set_errorcode(::google::protobuf::int32 value) {
  
  errorcode_ = value;
  // @@protoc_insertion_point(field_set:fixbug.LoginResponse.errorcode)
}

// optional string errmsg = 2;
void LoginResponse::clear_errmsg() {
  errmsg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& LoginResponse::errmsg() const {
  // @@protoc_insertion_point(field_get:fixbug.LoginResponse.errmsg)
  return errmsg_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LoginResponse::set_errmsg(const ::std::string& value) {
  
  errmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:fixbug.LoginResponse.errmsg)
}
 void LoginResponse::set_errmsg(const char* value) {
  
  errmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:fixbug.LoginResponse.errmsg)
}
 void LoginResponse::set_errmsg(const char* value, size_t size) {
  
  errmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:fixbug.LoginResponse.errmsg)
}
 ::std::string* LoginResponse::mutable_errmsg() {
  
  // @@protoc_insertion_point(field_mutable:fixbug.LoginResponse.errmsg)
  return errmsg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LoginResponse::release_errmsg() {
  // @@protoc_insertion_point(field_release:fixbug.LoginResponse.errmsg)
  
  return errmsg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LoginResponse::set_allocated_errmsg(::std::string* errmsg) {
  if (errmsg != NULL) {
    
  } else {
    
  }
  errmsg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), errmsg);
  // @@protoc_insertion_point(field_set_allocated:fixbug.LoginResponse.errmsg)
}

// optional bool success = 3;
void LoginResponse::clear_success() {
  success_ = false;
}
 bool LoginResponse::success() const {
  // @@protoc_insertion_point(field_get:fixbug.LoginResponse.success)
  return success_;
}
 void LoginResponse::set_success(bool value) {
  
  success_ = value;
  // @@protoc_insertion_point(field_set:fixbug.LoginResponse.success)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace fixbug

// @@protoc_insertion_point(global_scope)
