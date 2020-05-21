load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "demo",
    srcs = ["main.cc"],
    visibility = ["//main:__pkg__"],
    deps = ["//lib:demo-lib"],
)
