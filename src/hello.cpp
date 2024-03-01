#include "hello.h"

namespace hello {

std::string Hello::get_message(absl::string_view name) {
  return std::string(name);
}

} // namespace hello