#!/bin/sh

set -e

if [ "$1" == "glaze" ]; then
    target=GlazeExecutable
elif [ "$1" == "nlohmann" ]; then
    target=NlohmannExecutable
else
    echo "Usage: $0 <glaze|nlohmann>"
    exit 1
fi

rm -rf ./build ./dist
cmake . -B ./build -DCMAKE_INSTALL_PREFIX=./dist
time cmake --build ./build --target $target
cmake --install ./build
time ./dist/$target
