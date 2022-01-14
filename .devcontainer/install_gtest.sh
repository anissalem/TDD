#!/bin/sh

GTEST_VERSION="1.8.1"

if [ $# -eq 1 ]
then
    GTEST_VERSION=$1
fi

RELEASE_TAG=release-${GTEST_VERSION}
ARCHIVE=${RELEASE_TAG}.tar.gz

# Download & unpack
wget https://github.com/google/googletest/archive/refs/tags/${ARCHIVE}
tar xzf ${ARCHIVE}
cd googletest-${RELEASE_TAG}/

# Build & install
mkdir build && cd build
cmake ..
make -j all 
make -j install