#include "hello.h"
#include <iostream>

int main() {
  std::cout << hello::Hello::get_message("Foo") << std::endl;
  return 0;
}
