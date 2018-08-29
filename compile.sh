#!/bin/bash
mkdir -p build/lib/

g++ -Wall -fPIC -c src/map_retrive.cc -o build/map_retrive.o
g++ -shared -Wl,-soname,libmap.so -o build/lib/libmap.so build/map_retrive.o 
