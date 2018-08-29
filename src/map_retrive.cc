#include <iostream>
#include <map>

using namespace std;

int get_value(map<int, int> my_map, int key) {
    if(my_map.find(key) != my_map.end())
        return my_map[key];
    return -1;
}
