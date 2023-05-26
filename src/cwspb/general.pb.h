// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cwspb/general.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cwspb_2fgeneral_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cwspb_2fgeneral_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021009 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cwspb_2fgeneral_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cwspb_2fgeneral_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cwspb_2fgeneral_2eproto;
namespace cws {
class Coordinates;
struct CoordinatesDefaultTypeInternal;
extern CoordinatesDefaultTypeInternal _Coordinates_default_instance_;
class Dimension;
struct DimensionDefaultTypeInternal;
extern DimensionDefaultTypeInternal _Dimension_default_instance_;
class Percentage;
struct PercentageDefaultTypeInternal;
extern PercentageDefaultTypeInternal _Percentage_default_instance_;
class Temperature;
struct TemperatureDefaultTypeInternal;
extern TemperatureDefaultTypeInternal _Temperature_default_instance_;
}  // namespace cws
PROTOBUF_NAMESPACE_OPEN
template<> ::cws::Coordinates* Arena::CreateMaybeMessage<::cws::Coordinates>(Arena*);
template<> ::cws::Dimension* Arena::CreateMaybeMessage<::cws::Dimension>(Arena*);
template<> ::cws::Percentage* Arena::CreateMaybeMessage<::cws::Percentage>(Arena*);
template<> ::cws::Temperature* Arena::CreateMaybeMessage<::cws::Temperature>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cws {

// ===================================================================

class Coordinates final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cws.Coordinates) */ {
 public:
  inline Coordinates() : Coordinates(nullptr) {}
  ~Coordinates() override;
  explicit PROTOBUF_CONSTEXPR Coordinates(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Coordinates(const Coordinates& from);
  Coordinates(Coordinates&& from) noexcept
    : Coordinates() {
    *this = ::std::move(from);
  }

  inline Coordinates& operator=(const Coordinates& from) {
    CopyFrom(from);
    return *this;
  }
  inline Coordinates& operator=(Coordinates&& from) noexcept {
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
  static const Coordinates& default_instance() {
    return *internal_default_instance();
  }
  static inline const Coordinates* internal_default_instance() {
    return reinterpret_cast<const Coordinates*>(
               &_Coordinates_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Coordinates& a, Coordinates& b) {
    a.Swap(&b);
  }
  inline void Swap(Coordinates* other) {
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
  void UnsafeArenaSwap(Coordinates* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Coordinates* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Coordinates>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Coordinates& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Coordinates& from) {
    Coordinates::MergeImpl(*this, from);
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
  void InternalSwap(Coordinates* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cws.Coordinates";
  }
  protected:
  explicit Coordinates(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
  };
  // int32 x = 1;
  void clear_x();
  int32_t x() const;
  void set_x(int32_t value);
  private:
  int32_t _internal_x() const;
  void _internal_set_x(int32_t value);
  public:

  // int32 y = 2;
  void clear_y();
  int32_t y() const;
  void set_y(int32_t value);
  private:
  int32_t _internal_y() const;
  void _internal_set_y(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:cws.Coordinates)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t x_;
    int32_t y_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cwspb_2fgeneral_2eproto;
};
// -------------------------------------------------------------------

class Dimension final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cws.Dimension) */ {
 public:
  inline Dimension() : Dimension(nullptr) {}
  ~Dimension() override;
  explicit PROTOBUF_CONSTEXPR Dimension(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Dimension(const Dimension& from);
  Dimension(Dimension&& from) noexcept
    : Dimension() {
    *this = ::std::move(from);
  }

  inline Dimension& operator=(const Dimension& from) {
    CopyFrom(from);
    return *this;
  }
  inline Dimension& operator=(Dimension&& from) noexcept {
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
  static const Dimension& default_instance() {
    return *internal_default_instance();
  }
  static inline const Dimension* internal_default_instance() {
    return reinterpret_cast<const Dimension*>(
               &_Dimension_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Dimension& a, Dimension& b) {
    a.Swap(&b);
  }
  inline void Swap(Dimension* other) {
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
  void UnsafeArenaSwap(Dimension* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Dimension* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Dimension>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Dimension& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Dimension& from) {
    Dimension::MergeImpl(*this, from);
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
  void InternalSwap(Dimension* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cws.Dimension";
  }
  protected:
  explicit Dimension(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWidthFieldNumber = 1,
    kHeightFieldNumber = 2,
  };
  // int32 width = 1;
  void clear_width();
  int32_t width() const;
  void set_width(int32_t value);
  private:
  int32_t _internal_width() const;
  void _internal_set_width(int32_t value);
  public:

  // int32 height = 2;
  void clear_height();
  int32_t height() const;
  void set_height(int32_t value);
  private:
  int32_t _internal_height() const;
  void _internal_set_height(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:cws.Dimension)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t width_;
    int32_t height_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cwspb_2fgeneral_2eproto;
};
// -------------------------------------------------------------------

class Percentage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cws.Percentage) */ {
 public:
  inline Percentage() : Percentage(nullptr) {}
  ~Percentage() override;
  explicit PROTOBUF_CONSTEXPR Percentage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Percentage(const Percentage& from);
  Percentage(Percentage&& from) noexcept
    : Percentage() {
    *this = ::std::move(from);
  }

  inline Percentage& operator=(const Percentage& from) {
    CopyFrom(from);
    return *this;
  }
  inline Percentage& operator=(Percentage&& from) noexcept {
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
  static const Percentage& default_instance() {
    return *internal_default_instance();
  }
  static inline const Percentage* internal_default_instance() {
    return reinterpret_cast<const Percentage*>(
               &_Percentage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Percentage& a, Percentage& b) {
    a.Swap(&b);
  }
  inline void Swap(Percentage* other) {
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
  void UnsafeArenaSwap(Percentage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Percentage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Percentage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Percentage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Percentage& from) {
    Percentage::MergeImpl(*this, from);
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
  void InternalSwap(Percentage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cws.Percentage";
  }
  protected:
  explicit Percentage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
  };
  // double value = 1;
  void clear_value();
  double value() const;
  void set_value(double value);
  private:
  double _internal_value() const;
  void _internal_set_value(double value);
  public:

  // @@protoc_insertion_point(class_scope:cws.Percentage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    double value_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cwspb_2fgeneral_2eproto;
};
// -------------------------------------------------------------------

class Temperature final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cws.Temperature) */ {
 public:
  inline Temperature() : Temperature(nullptr) {}
  ~Temperature() override;
  explicit PROTOBUF_CONSTEXPR Temperature(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Temperature(const Temperature& from);
  Temperature(Temperature&& from) noexcept
    : Temperature() {
    *this = ::std::move(from);
  }

  inline Temperature& operator=(const Temperature& from) {
    CopyFrom(from);
    return *this;
  }
  inline Temperature& operator=(Temperature&& from) noexcept {
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
  static const Temperature& default_instance() {
    return *internal_default_instance();
  }
  static inline const Temperature* internal_default_instance() {
    return reinterpret_cast<const Temperature*>(
               &_Temperature_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(Temperature& a, Temperature& b) {
    a.Swap(&b);
  }
  inline void Swap(Temperature* other) {
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
  void UnsafeArenaSwap(Temperature* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Temperature* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Temperature>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Temperature& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Temperature& from) {
    Temperature::MergeImpl(*this, from);
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
  void InternalSwap(Temperature* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cws.Temperature";
  }
  protected:
  explicit Temperature(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
  };
  // double value = 1;
  void clear_value();
  double value() const;
  void set_value(double value);
  private:
  double _internal_value() const;
  void _internal_set_value(double value);
  public:

  // @@protoc_insertion_point(class_scope:cws.Temperature)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    double value_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cwspb_2fgeneral_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Coordinates

// int32 x = 1;
inline void Coordinates::clear_x() {
  _impl_.x_ = 0;
}
inline int32_t Coordinates::_internal_x() const {
  return _impl_.x_;
}
inline int32_t Coordinates::x() const {
  // @@protoc_insertion_point(field_get:cws.Coordinates.x)
  return _internal_x();
}
inline void Coordinates::_internal_set_x(int32_t value) {
  
  _impl_.x_ = value;
}
inline void Coordinates::set_x(int32_t value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:cws.Coordinates.x)
}

// int32 y = 2;
inline void Coordinates::clear_y() {
  _impl_.y_ = 0;
}
inline int32_t Coordinates::_internal_y() const {
  return _impl_.y_;
}
inline int32_t Coordinates::y() const {
  // @@protoc_insertion_point(field_get:cws.Coordinates.y)
  return _internal_y();
}
inline void Coordinates::_internal_set_y(int32_t value) {
  
  _impl_.y_ = value;
}
inline void Coordinates::set_y(int32_t value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:cws.Coordinates.y)
}

// -------------------------------------------------------------------

// Dimension

// int32 width = 1;
inline void Dimension::clear_width() {
  _impl_.width_ = 0;
}
inline int32_t Dimension::_internal_width() const {
  return _impl_.width_;
}
inline int32_t Dimension::width() const {
  // @@protoc_insertion_point(field_get:cws.Dimension.width)
  return _internal_width();
}
inline void Dimension::_internal_set_width(int32_t value) {
  
  _impl_.width_ = value;
}
inline void Dimension::set_width(int32_t value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:cws.Dimension.width)
}

// int32 height = 2;
inline void Dimension::clear_height() {
  _impl_.height_ = 0;
}
inline int32_t Dimension::_internal_height() const {
  return _impl_.height_;
}
inline int32_t Dimension::height() const {
  // @@protoc_insertion_point(field_get:cws.Dimension.height)
  return _internal_height();
}
inline void Dimension::_internal_set_height(int32_t value) {
  
  _impl_.height_ = value;
}
inline void Dimension::set_height(int32_t value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:cws.Dimension.height)
}

// -------------------------------------------------------------------

// Percentage

// double value = 1;
inline void Percentage::clear_value() {
  _impl_.value_ = 0;
}
inline double Percentage::_internal_value() const {
  return _impl_.value_;
}
inline double Percentage::value() const {
  // @@protoc_insertion_point(field_get:cws.Percentage.value)
  return _internal_value();
}
inline void Percentage::_internal_set_value(double value) {
  
  _impl_.value_ = value;
}
inline void Percentage::set_value(double value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:cws.Percentage.value)
}

// -------------------------------------------------------------------

// Temperature

// double value = 1;
inline void Temperature::clear_value() {
  _impl_.value_ = 0;
}
inline double Temperature::_internal_value() const {
  return _impl_.value_;
}
inline double Temperature::value() const {
  // @@protoc_insertion_point(field_get:cws.Temperature.value)
  return _internal_value();
}
inline void Temperature::_internal_set_value(double value) {
  
  _impl_.value_ = value;
}
inline void Temperature::set_value(double value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:cws.Temperature.value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace cws

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cwspb_2fgeneral_2eproto