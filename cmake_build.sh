#!/bin/bash

set -e

if ! command -v ninja &> /dev/null; then
    cmake -S . -B build -D CMAKE_BUILD_TYPE=Debug
else
    cmake -G Ninja -S . -B build -D CMAKE_BUILD_TYPE=Debug
fi

cmake --build build
cp build/compile_commands.json .
