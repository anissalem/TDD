#!/bin/sh

BAZEL_VERSION="4.0.0"

if [ $# -eq 1 ]
then
    BAZEL_VERSION=$1
fi

INSTALLER=bazel-${BAZEL_VERSION}-installer-linux-x86_64.sh

# Download
wget https://github.com/bazelbuild/bazel/releases/download/${BAZEL_VERSION}/${INSTALLER}

#Install
chmod +x ${INSTALLER}
./${INSTALLER} --user
