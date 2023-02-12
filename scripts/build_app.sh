#!/bin/bash

ncpu=$(grep ^cpu\\scores /proc/cpuinfo | uniq |  awk '{print $4}')
echo "Building IrisTestClient with $ncpu threads"
cmake --build ./../build --target IrisTestClient -j$ncpu