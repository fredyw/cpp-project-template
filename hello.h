#ifndef CPP_PROJECT_TEMPLATE_HELLO_H
#define CPP_PROJECT_TEMPLATE_HELLO_H

#include "absl/strings/string_view.h"
#include <string>

namespace hello {

class Hello {
public:
  static std::string get_message(absl::string_view name);
};

} // namespace hello

#endif // CPP_PROJECT_TEMPLATE_HELLO_H
