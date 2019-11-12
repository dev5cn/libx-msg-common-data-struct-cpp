// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dat-x-msg-common.proto

#ifndef PROTOBUF_dat_2dx_2dmsg_2dcommon_2eproto__INCLUDED
#define PROTOBUF_dat_2dx_2dmsg_2dcommon_2eproto__INCLUDED

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

namespace protobuf_dat_2dx_2dmsg_2dcommon_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsXmsgKv_KvEntry_DoNotUseImpl();
void InitDefaultsXmsgKv_KvEntry_DoNotUse();
void InitDefaultsXmsgKvImpl();
void InitDefaultsXmsgKv();
inline void InitDefaults() {
  InitDefaultsXmsgKv_KvEntry_DoNotUse();
  InitDefaultsXmsgKv();
}
}  // namespace protobuf_dat_2dx_2dmsg_2dcommon_2eproto
class XmsgKv;
class XmsgKvDefaultTypeInternal;
extern XmsgKvDefaultTypeInternal _XmsgKv_default_instance_;
class XmsgKv_KvEntry_DoNotUse;
class XmsgKv_KvEntry_DoNotUseDefaultTypeInternal;
extern XmsgKv_KvEntry_DoNotUseDefaultTypeInternal _XmsgKv_KvEntry_DoNotUse_default_instance_;

// ===================================================================

class XmsgKv_KvEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<XmsgKv_KvEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<XmsgKv_KvEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  XmsgKv_KvEntry_DoNotUse();
  XmsgKv_KvEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const XmsgKv_KvEntry_DoNotUse& other);
  static const XmsgKv_KvEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const XmsgKv_KvEntry_DoNotUse*>(&_XmsgKv_KvEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class XmsgKv : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:XmsgKv) */ {
 public:
  XmsgKv();
  virtual ~XmsgKv();

  XmsgKv(const XmsgKv& from);

  inline XmsgKv& operator=(const XmsgKv& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  XmsgKv(XmsgKv&& from) noexcept
    : XmsgKv() {
    *this = ::std::move(from);
  }

  inline XmsgKv& operator=(XmsgKv&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const XmsgKv& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const XmsgKv* internal_default_instance() {
    return reinterpret_cast<const XmsgKv*>(
               &_XmsgKv_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(XmsgKv* other);
  friend void swap(XmsgKv& a, XmsgKv& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline XmsgKv* New() const PROTOBUF_FINAL { return New(NULL); }

  XmsgKv* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const XmsgKv& from);
  void MergeFrom(const XmsgKv& from);
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
  void InternalSwap(XmsgKv* other);
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

  // map<string, string> kv = 1;
  int kv_size() const;
  void clear_kv();
  static const int kKvFieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      kv() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_kv();

  // @@protoc_insertion_point(class_scope:XmsgKv)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      XmsgKv_KvEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > kv_;
  mutable int _cached_size_;
  friend struct ::protobuf_dat_2dx_2dmsg_2dcommon_2eproto::TableStruct;
  friend void ::protobuf_dat_2dx_2dmsg_2dcommon_2eproto::InitDefaultsXmsgKvImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// XmsgKv

// map<string, string> kv = 1;
inline int XmsgKv::kv_size() const {
  return kv_.size();
}
inline void XmsgKv::clear_kv() {
  kv_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
XmsgKv::kv() const {
  // @@protoc_insertion_point(field_map:XmsgKv.kv)
  return kv_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
XmsgKv::mutable_kv() {
  // @@protoc_insertion_point(field_mutable_map:XmsgKv.kv)
  return kv_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dat_2dx_2dmsg_2dcommon_2eproto__INCLUDED