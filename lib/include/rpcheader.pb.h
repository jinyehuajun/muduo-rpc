// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpcheader.proto

#ifndef PROTOBUF_rpcheader_2eproto__INCLUDED
#define PROTOBUF_rpcheader_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace rong {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_rpcheader_2eproto();
void protobuf_AssignDesc_rpcheader_2eproto();
void protobuf_ShutdownFile_rpcheader_2eproto();

class Rpcheader;

// ===================================================================

class Rpcheader : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:rong.Rpcheader) */ {
 public:
  Rpcheader();
  virtual ~Rpcheader();

  Rpcheader(const Rpcheader& from);

  inline Rpcheader& operator=(const Rpcheader& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Rpcheader& default_instance();

  void Swap(Rpcheader* other);

  // implements Message ----------------------------------------------

  inline Rpcheader* New() const { return New(NULL); }

  Rpcheader* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Rpcheader& from);
  void MergeFrom(const Rpcheader& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Rpcheader* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes service_name = 1;
  void clear_service_name();
  static const int kServiceNameFieldNumber = 1;
  const ::std::string& service_name() const;
  void set_service_name(const ::std::string& value);
  void set_service_name(const char* value);
  void set_service_name(const void* value, size_t size);
  ::std::string* mutable_service_name();
  ::std::string* release_service_name();
  void set_allocated_service_name(::std::string* service_name);

  // optional bytes method_name = 2;
  void clear_method_name();
  static const int kMethodNameFieldNumber = 2;
  const ::std::string& method_name() const;
  void set_method_name(const ::std::string& value);
  void set_method_name(const char* value);
  void set_method_name(const void* value, size_t size);
  ::std::string* mutable_method_name();
  ::std::string* release_method_name();
  void set_allocated_method_name(::std::string* method_name);

  // optional uint32 args_size = 3;
  void clear_args_size();
  static const int kArgsSizeFieldNumber = 3;
  ::google::protobuf::uint32 args_size() const;
  void set_args_size(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:rong.Rpcheader)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr service_name_;
  ::google::protobuf::internal::ArenaStringPtr method_name_;
  ::google::protobuf::uint32 args_size_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_rpcheader_2eproto();
  friend void protobuf_AssignDesc_rpcheader_2eproto();
  friend void protobuf_ShutdownFile_rpcheader_2eproto();

  void InitAsDefaultInstance();
  static Rpcheader* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Rpcheader

// optional bytes service_name = 1;
inline void Rpcheader::clear_service_name() {
  service_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Rpcheader::service_name() const {
  // @@protoc_insertion_point(field_get:rong.Rpcheader.service_name)
  return service_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Rpcheader::set_service_name(const ::std::string& value) {
  
  service_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rong.Rpcheader.service_name)
}
inline void Rpcheader::set_service_name(const char* value) {
  
  service_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rong.Rpcheader.service_name)
}
inline void Rpcheader::set_service_name(const void* value, size_t size) {
  
  service_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rong.Rpcheader.service_name)
}
inline ::std::string* Rpcheader::mutable_service_name() {
  
  // @@protoc_insertion_point(field_mutable:rong.Rpcheader.service_name)
  return service_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Rpcheader::release_service_name() {
  // @@protoc_insertion_point(field_release:rong.Rpcheader.service_name)
  
  return service_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Rpcheader::set_allocated_service_name(::std::string* service_name) {
  if (service_name != NULL) {
    
  } else {
    
  }
  service_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service_name);
  // @@protoc_insertion_point(field_set_allocated:rong.Rpcheader.service_name)
}

// optional bytes method_name = 2;
inline void Rpcheader::clear_method_name() {
  method_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Rpcheader::method_name() const {
  // @@protoc_insertion_point(field_get:rong.Rpcheader.method_name)
  return method_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Rpcheader::set_method_name(const ::std::string& value) {
  
  method_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rong.Rpcheader.method_name)
}
inline void Rpcheader::set_method_name(const char* value) {
  
  method_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rong.Rpcheader.method_name)
}
inline void Rpcheader::set_method_name(const void* value, size_t size) {
  
  method_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rong.Rpcheader.method_name)
}
inline ::std::string* Rpcheader::mutable_method_name() {
  
  // @@protoc_insertion_point(field_mutable:rong.Rpcheader.method_name)
  return method_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Rpcheader::release_method_name() {
  // @@protoc_insertion_point(field_release:rong.Rpcheader.method_name)
  
  return method_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Rpcheader::set_allocated_method_name(::std::string* method_name) {
  if (method_name != NULL) {
    
  } else {
    
  }
  method_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method_name);
  // @@protoc_insertion_point(field_set_allocated:rong.Rpcheader.method_name)
}

// optional uint32 args_size = 3;
inline void Rpcheader::clear_args_size() {
  args_size_ = 0u;
}
inline ::google::protobuf::uint32 Rpcheader::args_size() const {
  // @@protoc_insertion_point(field_get:rong.Rpcheader.args_size)
  return args_size_;
}
inline void Rpcheader::set_args_size(::google::protobuf::uint32 value) {
  
  args_size_ = value;
  // @@protoc_insertion_point(field_set:rong.Rpcheader.args_size)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace rong

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rpcheader_2eproto__INCLUDED
