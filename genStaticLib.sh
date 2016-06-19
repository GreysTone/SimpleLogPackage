#!/usr/bin/env bash

# Generate Static Library for macOS
clang -c GTGeneralLogSystem.cc -std=c++11
ar -crv ./lib/libGTGeneralLogSys.a GTGeneralLogSystem.o
