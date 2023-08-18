#!/bin/bash

set -e

cmake -S . -B build -D CMAKE_BUILD_TYPE=Debug
cmake --build build
cp build/compile_commands.json .