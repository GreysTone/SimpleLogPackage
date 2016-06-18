#!/usr/bin/env bash

# Generate Static Library
clang -c GTGeneralLogSystem.cc -std=c++11
ar -crv libGTGeneralLogSys.a GTGeneralLogSystem.o