/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/qualified/gen-cpp/module0_constants.h"

namespace MODULE0 {

Struct const &module0_constants::c0() {
  static Struct const instance = Struct(
    ::apache::thrift::detail::wrap_argument<1>(101),
    ::apache::thrift::detail::wrap_argument<2>("module0_str"));
  return instance;
}
std::vector<Enum>  const &module0_constants::e0s() {
  static std::vector<Enum>  const instance = std::vector<Enum> {
    (Enum)1,
    (Enum)3,
  };
  return instance;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

module0Constants::module0Constants() {
  c0 = module0_constants::c0();
  e0s = module0_constants::e0s();
}

#pragma GCC diagnostic pop

} // namespace

