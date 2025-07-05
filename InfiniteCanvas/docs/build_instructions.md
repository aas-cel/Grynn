# Build Instructions

## Prerequisites
- C++20 compiler
- CMake >= 3.16
- StyleCPP (included as submodule or in external/)

## Build
```sh
mkdir build && cd build
cmake ..
make -j$(nproc)
./InfiniteCanvas
```
