cc_library(
    name = "hello",
    srcs = ["hello.cpp"],
    hdrs = ["hello.h"],
    deps = [
        "@abseil-cpp//absl/strings",
    ],
)

cc_test(
    name = "hello_test",
    srcs = ["hello_test.cpp"],
    deps = [
        ":hello",
        "@googletest//:gtest",
    ],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        ":hello",
    ],
)
