#include <iostream>

using namespace std;

int get_value(map<int, int> *my_map, int key) {
    if(nullptr != my_map && my_map->find(key) != my_map->end())
        return my_map->at(key);
    return -1;
}
