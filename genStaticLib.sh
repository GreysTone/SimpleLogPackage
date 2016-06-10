#!/usr/bin/env bash

clang -c GTGeneralLogSystem.cc -std=c++11
ar -crv libGTGeneralLogSys.a GTGeneralLogSystem.o