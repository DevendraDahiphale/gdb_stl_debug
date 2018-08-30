Enhancing GDB print pretty for c++ stl containers.

Some missing GDB features are really annoying and consumes developers time.
One of such missing features is finding a "key-value" pair in the map. GDB print pretty
prints the whole map but it cannot find a specific key in the map. Developer has to manually find
the key in the printed map. If the map is too big it becomes very difficult to manually find that key.

We developed a working proof of concept to add this feature as a plugin in the GDB.

Idea is simple as follows.

1. Write map find function in the seperate .cc file. (map_retrieve.cpp)
2. Compile "map_retrieve.cpp" into libmap.so file.
3. Run the program using GDB and load libmap.so file using dlopen()
4. Use gdb call command to call find()
