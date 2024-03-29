// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: net-x-msg-ne-common.proto

#ifndef PROTOBUF_net_2dx_2dmsg_2dne_2dcommon_2eproto__INCLUDED
#define PROTOBUF_net_2dx_2dmsg_2dne_2dcommon_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_net_2dx_2dmsg_2dne_2dcommon_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsXmsgNeAuthReq_ExtEntry_DoNotUseImpl();
void InitDefaultsXmsgNeAuthReq_ExtEntry_DoNotUse();
void InitDefaultsXmsgNeAuthReqImpl();
void InitDefaultsXmsgNeAuthReq();
void InitDefaultsXmsgNeAuthRsp_ExtEntry_DoNotUseImpl();
void InitDefaultsXmsgNeAuthRsp_ExtEntry_DoNotUse();
void InitDefaultsXmsgNeAuthRspImpl();
void InitDefaultsXmsgNeAuthRsp();
inline void InitDefaults() {
  InitDefaultsXmsgNeAuthReq_ExtEntry_DoNotUse();
  InitDefaultsXmsgNeAuthReq();
  InitDefaultsXmsgNeAuthRsp_ExtEntry_DoNotUse();
  InitDefaultsXmsgNeAuthRsp();
}
}  // namespace protobuf_net_2dx_2dmsg_2dne_2dcommon_2eproto
class XmsgNeAuthReq;
class XmsgNeAuthReqDefaultTypeInternal;
extern XmsgNeAuthReqDefaultTypeInternal _XmsgNeAuthReq_default_instance_;
class XmsgNeAuthReq_ExtEntry_DoNotUse;
class XmsgNeAuthReq_ExtEntry_DoNotUseDefaultTypeInternal;
extern XmsgNeAuthReq_ExtEntry_DoNotUseDefaultTypeInternal _XmsgNeAuthReq_ExtEntry_DoNotUse_default_instance_;
class XmsgNeAuthRsp;
class XmsgNeAuthRspDefaultTypeInternal;
extern XmsgNeAuthRspDefaultTypeInternal _XmsgNeAuthRsp_default_instance_;
class XmsgNeAuthRsp_ExtEntry_DoNotUse;
class XmsgNeAuthRsp_ExtEntry_DoNotUseDefaultTypeInternal;
extern XmsgNeAuthRsp_ExtEntry_DoNotUseDefaultTypeInternal _XmsgNeAuthRsp_ExtEntry_DoNotUse_default_instance_;

// ===================================================================

class XmsgNeAuthReq_ExtEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<XmsgNeAuthReq_ExtEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<XmsgNeAuthReq_ExtEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  XmsgNeAuthReq_ExtEntry_DoNotUse();
  XmsgNeAuthReq_ExtEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const XmsgNeAuthReq_ExtEntry_DoNotUse& other);
  static const XmsgNeAuthReq_ExtEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const XmsgNeAuthReq_ExtEntry_DoNotUse*>(&_XmsgNeAuthReq_ExtEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class XmsgNeAuthReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:XmsgNeAuthReq) */ {
 public:
  XmsgNeAuthReq();
  virtual ~XmsgNeAuthReq();

  XmsgNeAuthReq(const XmsgNeAuthReq& from);

  inline XmsgNeAuthReq& operator=(const XmsgNeAuthReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  XmsgNeAuthReq(XmsgNeAuthReq&& from) noexcept
    : XmsgNeAuthReq() {
    *this = ::std::move(from);
  }

  inline XmsgNeAuthReq& operator=(XmsgNeAuthReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const XmsgNeAuthReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const XmsgNeAuthReq* internal_default_instance() {
    return reinterpret_cast<const XmsgNeAuthReq*>(
               &_XmsgNeAuthReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(XmsgNeAuthReq* other);
  friend void swap(XmsgNeAuthReq& a, XmsgNeAuthReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline XmsgNeAuthReq* New() const PROTOBUF_FINAL { return New(NULL); }

  XmsgNeAuthReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const XmsgNeAuthReq& from);
  void MergeFrom(const XmsgNeAuthReq& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(XmsgNeAuthReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, string> ext = 6;
  int ext_size() const;
  void clear_ext();
  static const int kExtFieldNumber = 6;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      ext() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_ext();

  // string neg = 1;
  void clear_neg();
  static const int kNegFieldNumber = 1;
  const ::std::string& neg() const;
  void set_neg(const ::std::string& value);
  #if LANG_CXX11
  void set_neg(::std::string&& value);
  #endif
  void set_neg(const char* value);
  void set_neg(const char* value, size_t size);
  ::std::string* mutable_neg();
  ::std::string* release_neg();
  void set_allocated_neg(::std::string* neg);

  // string cgt = 2;
  void clear_cgt();
  static const int kCgtFieldNumber = 2;
  const ::std::string& cgt() const;
  void set_cgt(const ::std::string& value);
  #if LANG_CXX11
  void set_cgt(::std::string&& value);
  #endif
  void set_cgt(const char* value);
  void set_cgt(const char* value, size_t size);
  ::std::string* mutable_cgt();
  ::std::string* release_cgt();
  void set_allocated_cgt(::std::string* cgt);

  // string salt = 3;
  void clear_salt();
  static const int kSaltFieldNumber = 3;
  const ::std::string& salt() const;
  void set_salt(const ::std::string& value);
  #if LANG_CXX11
  void set_salt(::std::string&& value);
  #endif
  void set_salt(const char* value);
  void set_salt(const char* value, size_t size);
  ::std::string* mutable_salt();
  ::std::string* release_salt();
  void set_allocated_salt(::std::string* salt);

  // string sign = 4;
  void clear_sign();
  static const int kSignFieldNumber = 4;
  const ::std::string& sign() const;
  void set_sign(const ::std::string& value);
  #if LANG_CXX11
  void set_sign(::std::string&& value);
  #endif
  void set_sign(const char* value);
  void set_sign(const char* value, size_t size);
  ::std::string* mutable_sign();
  ::std::string* release_sign();
  void set_allocated_sign(::std::string* sign);

  // string alg = 5;
  void clear_alg();
  static const int kAlgFieldNumber = 5;
  const ::std::string& alg() const;
  void set_alg(const ::std::string& value);
  #if LANG_CXX11
  void set_alg(::std::string&& value);
  #endif
  void set_alg(const char* value);
  void set_alg(const char* value, size_t size);
  ::std::string* mutable_alg();
  ::std::string* release_alg();
  void set_allocated_alg(::std::string* alg);

  // @@protoc_insertion_point(class_scope:XmsgNeAuthReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      XmsgNeAuthReq_ExtEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > ext_;
  ::google::protobuf::internal::ArenaStringPtr neg_;
  ::google::protobuf::internal::ArenaStringPtr cgt_;
  ::google::protobuf::internal::ArenaStringPtr salt_;
  ::google::protobuf::internal::ArenaStringPtr sign_;
  ::google::protobuf::internal::ArenaStringPtr alg_;
  mutable int _cached_size_;
  friend struct ::protobuf_net_2dx_2dmsg_2dne_2dcommon_2eproto::TableStruct;
  friend void ::protobuf_net_2dx_2dmsg_2dne_2dcommon_2eproto::InitDefaultsXmsgNeAuthReqImpl();
};
// -------------------------------------------------------------------

class XmsgNeAuthRsp_ExtEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<XmsgNeAuthRsp_ExtEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<XmsgNeAuthRsp_ExtEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  XmsgNeAuthRsp_ExtEntry_DoNotUse();
  XmsgNeAuthRsp_ExtEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const XmsgNeAuthRsp_ExtEntry_DoNotUse& other);
  static const XmsgNeAuthRsp_ExtEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const XmsgNeAuthRsp_ExtEntry_DoNotUse*>(&_XmsgNeAuthRsp_ExtEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class XmsgNeAuthRsp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:XmsgNeAuthRsp) */ {
 public:
  XmsgNeAuthRsp();
  virtual ~XmsgNeAuthRsp();

  XmsgNeAuthRsp(const XmsgNeAuthRsp& from);

  inline XmsgNeAuthRsp& operator=(const XmsgNeAuthRsp& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  XmsgNeAuthRsp(XmsgNeAuthRsp&& from) noexcept
    : XmsgNeAuthRsp() {
    *this = ::std::move(from);
  }

  inline XmsgNeAuthRsp& operator=(XmsgNeAuthRsp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const XmsgNeAuthRsp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const XmsgNeAuthRsp* internal_default_instance() {
    return reinterpret_cast<const XmsgNeAuthRsp*>(
               &_XmsgNeAuthRsp_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(XmsgNeAuthRsp* other);
  friend void swap(XmsgNeAuthRsp& a, XmsgNeAuthRsp& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline XmsgNeAuthRsp* New() const PROTOBUF_FINAL { return New(NULL); }

  XmsgNeAuthRsp* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const XmsgNeAuthRsp& from);
  void MergeFrom(const XmsgNeAuthRsp& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(XmsgNeAuthRsp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, string> ext = 2;
  int ext_size() const;
  void clear_ext();
  static const int kExtFieldNumber = 2;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      ext() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_ext();

  // string cgt = 1;
  void clear_cgt();
  static const int kCgtFieldNumber = 1;
  const ::std::string& cgt() const;
  void set_cgt(const ::std::string& value);
  #if LANG_CXX11
  void set_cgt(::std::string&& value);
  #endif
  void set_cgt(const char* value);
  void set_cgt(const char* value, size_t size);
  ::std::string* mutable_cgt();
  ::std::string* release_cgt();
  void set_allocated_cgt(::std::string* cgt);

  // @@protoc_insertion_point(class_scope:XmsgNeAuthRsp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      XmsgNeAuthRsp_ExtEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > ext_;
  ::google::protobuf::internal::ArenaStringPtr cgt_;
  mutable int _cached_size_;
  friend struct ::protobuf_net_2dx_2dmsg_2dne_2dcommon_2eproto::TableStruct;
  friend void ::protobuf_net_2dx_2dmsg_2dne_2dcommon_2eproto::InitDefaultsXmsgNeAuthRspImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// XmsgNeAuthReq

// string neg = 1;
inline void XmsgNeAuthReq::clear_neg() {
  neg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& XmsgNeAuthReq::neg() const {
  // @@protoc_insertion_point(field_get:XmsgNeAuthReq.neg)
  return neg_.GetNoArena();
}
inline void XmsgNeAuthReq::set_neg(const ::std::string& value) {
  
  neg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:XmsgNeAuthReq.neg)
}
#if LANG_CXX11
inline void XmsgNeAuthReq::set_neg(::std::string&& value) {
  
  neg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:XmsgNeAuthReq.neg)
}
#endif
inline void XmsgNeAuthReq::set_neg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  neg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:XmsgNeAuthReq.neg)
}
inline void XmsgNeAuthReq::set_neg(const char* value, size_t size) {
  
  neg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:XmsgNeAuthReq.neg)
}
inline ::std::string* XmsgNeAuthReq::mutable_neg() {
  
  // @@protoc_insertion_point(field_mutable:XmsgNeAuthReq.neg)
  return neg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* XmsgNeAuthReq::release_neg() {
  // @@protoc_insertion_point(field_release:XmsgNeAuthReq.neg)
  
  return neg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void XmsgNeAuthReq::set_allocated_neg(::std::string* neg) {
  if (neg != NULL) {
    
  } else {
    
  }
  neg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), neg);
  // @@protoc_insertion_point(field_set_allocated:XmsgNeAuthReq.neg)
}

// string cgt = 2;
inline void XmsgNeAuthReq::clear_cgt() {
  cgt_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& XmsgNeAuthReq::cgt() const {
  // @@protoc_insertion_point(field_get:XmsgNeAuthReq.cgt)
  return cgt_.GetNoArena();
}
inline void XmsgNeAuthReq::set_cgt(const ::std::string& value) {
  
  cgt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:XmsgNeAuthReq.cgt)
}
#if LANG_CXX11
inline void XmsgNeAuthReq::set_cgt(::std::string&& value) {
  
  cgt_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:XmsgNeAuthReq.cgt)
}
#endif
inline void XmsgNeAuthReq::set_cgt(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  cgt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:XmsgNeAuthReq.cgt)
}
inline void XmsgNeAuthReq::set_cgt(const char* value, size_t size) {
  
  cgt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:XmsgNeAuthReq.cgt)
}
inline ::std::string* XmsgNeAuthReq::mutable_cgt() {
  
  // @@protoc_insertion_point(field_mutable:XmsgNeAuthReq.cgt)
  return cgt_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* XmsgNeAuthReq::release_cgt() {
  // @@protoc_insertion_point(field_release:XmsgNeAuthReq.cgt)
  
  return cgt_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void XmsgNeAuthReq::set_allocated_cgt(::std::string* cgt) {
  if (cgt != NULL) {
    
  } else {
    
  }
  cgt_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cgt);
  // @@protoc_insertion_point(field_set_allocated:XmsgNeAuthReq.cgt)
}

// string salt = 3;
inline void XmsgNeAuthReq::clear_salt() {
  salt_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& XmsgNeAuthReq::salt() const {
  // @@protoc_insertion_point(field_get:XmsgNeAuthReq.salt)
  return salt_.GetNoArena();
}
inline void XmsgNeAuthReq::set_salt(const ::std::string& value) {
  
  salt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:XmsgNeAuthReq.salt)
}
#if LANG_CXX11
inline void XmsgNeAuthReq::set_salt(::std::string&& value) {
  
  salt_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:XmsgNeAuthReq.salt)
}
#endif
inline void XmsgNeAuthReq::set_salt(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  salt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:XmsgNeAuthReq.salt)
}
inline void XmsgNeAuthReq::set_salt(const char* value, size_t size) {
  
  salt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:XmsgNeAuthReq.salt)
}
inline ::std::string* XmsgNeAuthReq::mutable_salt() {
  
  // @@protoc_insertion_point(field_mutable:XmsgNeAuthReq.salt)
  return salt_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* XmsgNeAuthReq::release_salt() {
  // @@protoc_insertion_point(field_release:XmsgNeAuthReq.salt)
  
  return salt_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void XmsgNeAuthReq::set_allocated_salt(::std::string* salt) {
  if (salt != NULL) {
    
  } else {
    
  }
  salt_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), salt);
  // @@protoc_insertion_point(field_set_allocated:XmsgNeAuthReq.salt)
}

// string sign = 4;
inline void XmsgNeAuthReq::clear_sign() {
  sign_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& XmsgNeAuthReq::sign() const {
  // @@protoc_insertion_point(field_get:XmsgNeAuthReq.sign)
  return sign_.GetNoArena();
}
inline void XmsgNeAuthReq::set_sign(const ::std::string& value) {
  
  sign_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:XmsgNeAuthReq.sign)
}
#if LANG_CXX11
inline void XmsgNeAuthReq::set_sign(::std::string&& value) {
  
  sign_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:XmsgNeAuthReq.sign)
}
#endif
inline void XmsgNeAuthReq::set_sign(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  sign_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:XmsgNeAuthReq.sign)
}
inline void XmsgNeAuthReq::set_sign(const char* value, size_t size) {
  
  sign_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:XmsgNeAuthReq.sign)
}
inline ::std::string* XmsgNeAuthReq::mutable_sign() {
  
  // @@protoc_insertion_point(field_mutable:XmsgNeAuthReq.sign)
  return sign_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* XmsgNeAuthReq::release_sign() {
  // @@protoc_insertion_point(field_release:XmsgNeAuthReq.sign)
  
  return sign_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void XmsgNeAuthReq::set_allocated_sign(::std::string* sign) {
  if (sign != NULL) {
    
  } else {
    
  }
  sign_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sign);
  // @@protoc_insertion_point(field_set_allocated:XmsgNeAuthReq.sign)
}

// string alg = 5;
inline void XmsgNeAuthReq::clear_alg() {
  alg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& XmsgNeAuthReq::alg() const {
  // @@protoc_insertion_point(field_get:XmsgNeAuthReq.alg)
  return alg_.GetNoArena();
}
inline void XmsgNeAuthReq::set_alg(const ::std::string& value) {
  
  alg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:XmsgNeAuthReq.alg)
}
#if LANG_CXX11
inline void XmsgNeAuthReq::set_alg(::std::string&& value) {
  
  alg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:XmsgNeAuthReq.alg)
}
#endif
inline void XmsgNeAuthReq::set_alg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  alg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:XmsgNeAuthReq.alg)
}
inline void XmsgNeAuthReq::set_alg(const char* value, size_t size) {
  
  alg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:XmsgNeAuthReq.alg)
}
inline ::std::string* XmsgNeAuthReq::mutable_alg() {
  
  // @@protoc_insertion_point(field_mutable:XmsgNeAuthReq.alg)
  return alg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* XmsgNeAuthReq::release_alg() {
  // @@protoc_insertion_point(field_release:XmsgNeAuthReq.alg)
  
  return alg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void XmsgNeAuthReq::set_allocated_alg(::std::string* alg) {
  if (alg != NULL) {
    
  } else {
    
  }
  alg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), alg);
  // @@protoc_insertion_point(field_set_allocated:XmsgNeAuthReq.alg)
}

// map<string, string> ext = 6;
inline int XmsgNeAuthReq::ext_size() const {
  return ext_.size();
}
inline void XmsgNeAuthReq::clear_ext() {
  ext_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
XmsgNeAuthReq::ext() const {
  // @@protoc_insertion_point(field_map:XmsgNeAuthReq.ext)
  return ext_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
XmsgNeAuthReq::mutable_ext() {
  // @@protoc_insertion_point(field_mutable_map:XmsgNeAuthReq.ext)
  return ext_.MutableMap();
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// XmsgNeAuthRsp

// string cgt = 1;
inline void XmsgNeAuthRsp::clear_cgt() {
  cgt_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& XmsgNeAuthRsp::cgt() const {
  // @@protoc_insertion_point(field_get:XmsgNeAuthRsp.cgt)
  return cgt_.GetNoArena();
}
inline void XmsgNeAuthRsp::set_cgt(const ::std::string& value) {
  
  cgt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:XmsgNeAuthRsp.cgt)
}
#if LANG_CXX11
inline void XmsgNeAuthRsp::set_cgt(::std::string&& value) {
  
  cgt_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:XmsgNeAuthRsp.cgt)
}
#endif
inline void XmsgNeAuthRsp::set_cgt(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  cgt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:XmsgNeAuthRsp.cgt)
}
inline void XmsgNeAuthRsp::set_cgt(const char* value, size_t size) {
  
  cgt_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:XmsgNeAuthRsp.cgt)
}
inline ::std::string* XmsgNeAuthRsp::mutable_cgt() {
  
  // @@protoc_insertion_point(field_mutable:XmsgNeAuthRsp.cgt)
  return cgt_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* XmsgNeAuthRsp::release_cgt() {
  // @@protoc_insertion_point(field_release:XmsgNeAuthRsp.cgt)
  
  return cgt_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void XmsgNeAuthRsp::set_allocated_cgt(::std::string* cgt) {
  if (cgt != NULL) {
    
  } else {
    
  }
  cgt_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cgt);
  // @@protoc_insertion_point(field_set_allocated:XmsgNeAuthRsp.cgt)
}

// map<string, string> ext = 2;
inline int XmsgNeAuthRsp::ext_size() const {
  return ext_.size();
}
inline void XmsgNeAuthRsp::clear_ext() {
  ext_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
XmsgNeAuthRsp::ext() const {
  // @@protoc_insertion_point(field_map:XmsgNeAuthRsp.ext)
  return ext_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
XmsgNeAuthRsp::mutable_ext() {
  // @@protoc_insertion_point(field_mutable_map:XmsgNeAuthRsp.ext)
  return ext_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_net_2dx_2dmsg_2dne_2dcommon_2eproto__INCLUDED
