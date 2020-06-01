# Cpp Project Template

This is a template of cpp project which uses [cmake](<https://cmake.org/>) or [bazel](<https://bazel.build/>) as build tools.

## Use cmake

The project uses [Google Test](<https://github.com/google/googletest>) as unit test framework which is a submodule of the repository.

1. Update submodule

   ```sh
   git submodule upate --init --recursive
   ```

2. Make and test

   ```sh
   mkdir build
   cd build
   cmake ..
   make
   ctest
   ```

## Use bazel

1. Build

   ```sh
   bazel build -c opt //main:demo
   ```

2. Run unit tests

   ```sh
   bazel test -c opt //lib:demo-lib-test
   ```
