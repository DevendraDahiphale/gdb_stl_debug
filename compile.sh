#!/bin/bash
mkdir -p build/lib/

# compiling sources
g++ -Wall -fPIC -c src/map_retrieve.cc -o build/map_retrieve.o
g++ -shared -Wl,-soname,libmap.so -o build/lib/libmap.so build/map_retrieve.o

mkdir -p build/bin/
# compiling tests
g++ test/map_retrieve_test.cc -ldl -g3 -o build/bin/map_retrieve_test.out
