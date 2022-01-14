# [Choice] Debian / Ubuntu version: debian-10, debian-9, ubuntu-20.04, ubuntu-18.04
ARG VARIANT
FROM mcr.microsoft.com/vscode/devcontainers/base:dev-${VARIANT}

# Install needed packages. Use a separate RUN statement to add your own dependencies.
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install build-essential cmake cppcheck valgrind clang lldb llvm gdb doxygen\
    && apt-get autoremove -y && apt-get clean -y && rm -rf /var/lib/apt/lists/*

# Install googletest
ARG GTEST_VERSION
COPY install_gtest.sh /tmp/
RUN cd /tmp && ./install_gtest.sh ${GTEST_VERSION}