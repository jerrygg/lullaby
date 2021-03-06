// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TRANSFORMDEF_LULL_H_
#define FLATBUFFERS_GENERATED_TRANSFORMDEF_LULL_H_

#include "flatbuffers/flatbuffers.h"

#include "common_generated.h"

namespace lull {

struct TransformDef;

/// Describes a transformation of the Entity relative to its parent.
/// The transform is applied in the order: rotate, scale, translate.
struct TransformDef FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static FLATBUFFERS_CONSTEXPR const char *GetFullyQualifiedName() {
    return "lull.TransformDef";
  }
  enum {
    VT_POSITION = 4,
    VT_ROTATION = 6,
    VT_SCALE = 8,
    VT_CHILDREN = 10,
    VT_AABB = 12,
    VT_AABB_PADDING = 14,
    VT_QUATERNION = 16,
    VT_ENABLED = 18
  };
  const lull::Vec3 *position() const {
    return GetStruct<const lull::Vec3 *>(VT_POSITION);
  }
  /// euler angles (used if quaternion is not defined)
  const lull::Vec3 *rotation() const {
    return GetStruct<const lull::Vec3 *>(VT_ROTATION);
  }
  const lull::Vec3 *scale() const {
    return GetStruct<const lull::Vec3 *>(VT_SCALE);
  }
  /// ids of child entities
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *children() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_CHILDREN);
  }
  const lull::AabbDef *aabb() const {
    return GetStruct<const lull::AabbDef *>(VT_AABB);
  }
  const lull::AabbDef *aabb_padding() const {
    return GetStruct<const lull::AabbDef *>(VT_AABB_PADDING);
  }
  /// Normalized rotation.  w is the scalar.
  const lull::Vec4 *quaternion() const {
    return GetStruct<const lull::Vec4 *>(VT_QUATERNION);
  }
  bool enabled() const {
    return GetField<uint8_t>(VT_ENABLED, 1) != 0;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<lull::Vec3>(verifier, VT_POSITION) &&
           VerifyField<lull::Vec3>(verifier, VT_ROTATION) &&
           VerifyField<lull::Vec3>(verifier, VT_SCALE) &&
           VerifyOffset(verifier, VT_CHILDREN) &&
           verifier.Verify(children()) &&
           verifier.VerifyVectorOfStrings(children()) &&
           VerifyField<lull::AabbDef>(verifier, VT_AABB) &&
           VerifyField<lull::AabbDef>(verifier, VT_AABB_PADDING) &&
           VerifyField<lull::Vec4>(verifier, VT_QUATERNION) &&
           VerifyField<uint8_t>(verifier, VT_ENABLED) &&
           verifier.EndTable();
  }
};

struct TransformDefBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_position(const lull::Vec3 *position) {
    fbb_.AddStruct(TransformDef::VT_POSITION, position);
  }
  void add_rotation(const lull::Vec3 *rotation) {
    fbb_.AddStruct(TransformDef::VT_ROTATION, rotation);
  }
  void add_scale(const lull::Vec3 *scale) {
    fbb_.AddStruct(TransformDef::VT_SCALE, scale);
  }
  void add_children(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> children) {
    fbb_.AddOffset(TransformDef::VT_CHILDREN, children);
  }
  void add_aabb(const lull::AabbDef *aabb) {
    fbb_.AddStruct(TransformDef::VT_AABB, aabb);
  }
  void add_aabb_padding(const lull::AabbDef *aabb_padding) {
    fbb_.AddStruct(TransformDef::VT_AABB_PADDING, aabb_padding);
  }
  void add_quaternion(const lull::Vec4 *quaternion) {
    fbb_.AddStruct(TransformDef::VT_QUATERNION, quaternion);
  }
  void add_enabled(bool enabled) {
    fbb_.AddElement<uint8_t>(TransformDef::VT_ENABLED, static_cast<uint8_t>(enabled), 1);
  }
  TransformDefBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TransformDefBuilder &operator=(const TransformDefBuilder &);
  flatbuffers::Offset<TransformDef> Finish() {
    const auto end = fbb_.EndTable(start_, 8);
    auto o = flatbuffers::Offset<TransformDef>(end);
    return o;
  }
};

inline flatbuffers::Offset<TransformDef> CreateTransformDef(
    flatbuffers::FlatBufferBuilder &_fbb,
    const lull::Vec3 *position = 0,
    const lull::Vec3 *rotation = 0,
    const lull::Vec3 *scale = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> children = 0,
    const lull::AabbDef *aabb = 0,
    const lull::AabbDef *aabb_padding = 0,
    const lull::Vec4 *quaternion = 0,
    bool enabled = true) {
  TransformDefBuilder builder_(_fbb);
  builder_.add_quaternion(quaternion);
  builder_.add_aabb_padding(aabb_padding);
  builder_.add_aabb(aabb);
  builder_.add_children(children);
  builder_.add_scale(scale);
  builder_.add_rotation(rotation);
  builder_.add_position(position);
  builder_.add_enabled(enabled);
  return builder_.Finish();
}

inline flatbuffers::Offset<TransformDef> CreateTransformDefDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const lull::Vec3 *position = 0,
    const lull::Vec3 *rotation = 0,
    const lull::Vec3 *scale = 0,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *children = nullptr,
    const lull::AabbDef *aabb = 0,
    const lull::AabbDef *aabb_padding = 0,
    const lull::Vec4 *quaternion = 0,
    bool enabled = true) {
  return lull::CreateTransformDef(
      _fbb,
      position,
      rotation,
      scale,
      children ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*children) : 0,
      aabb,
      aabb_padding,
      quaternion,
      enabled);
}

inline const lull::TransformDef *GetTransformDef(const void *buf) {
  return flatbuffers::GetRoot<lull::TransformDef>(buf);
}

inline bool VerifyTransformDefBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<lull::TransformDef>(nullptr);
}

inline void FinishTransformDefBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<lull::TransformDef> root) {
  fbb.Finish(root);
}

}  // namespace lull

#endif  // FLATBUFFERS_GENERATED_TRANSFORMDEF_LULL_H_
