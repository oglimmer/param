#!/usr/bin/env bash

set -eu

mkdir -p release && cd release
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
cmake --install . --config Release
