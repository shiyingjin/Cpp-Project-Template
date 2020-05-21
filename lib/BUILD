load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

cc_library(
    name = "demo-lib",
    srcs = ["demo.cc"],
    hdrs = ["demo.h"],
    visibility = ["//main:__pkg__"],
)

cc_test(
    name = "demo-lib-test",
    srcs = ["demo_test.cc"],
    deps = [
        ":demo-lib",
        "@com_google_googletest//:gtest",
        "@com_google_googletest//:gtest_main",
    ],
)
