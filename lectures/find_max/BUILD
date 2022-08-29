load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")


cc_library(
    name = "find_max",
    srcs = ["find_max.cc"],
    hdrs = ["find_max.h"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name="main",
    srcs=["main.cc"],
    deps = [":find_max"],
)

cc_test(
    name = "find_max_test",
    srcs = ["find_max_test.cc"],
    deps = [
        ":find_max",
        "@com_google_googletest//:gtest_main",
    ],
)