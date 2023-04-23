#include "hello.h"
#include "gtest/gtest.h"

namespace {

TEST(FooTest, Success) {
  EXPECT_EQ(hello::Hello::get_message("Foo"), "Foo");
}

}