#!/usr/bin/env bash

# Generate Dynamic Library for macOS
g++ -dynamiclib -o ./lib/libGTGeneralLogSys.dylib GTGeneralLogSystem.cc -std=c++11
