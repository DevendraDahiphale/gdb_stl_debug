#!/bin/bash
mkdir -p build/lib/

g++ -Wall -fPIC -c src/map_retrieve.cc -o build/map_retrieve.o
g++ -shared -Wl,-soname,libmap.so -o build/lib/libmap.so build/map_retrieve.o 
