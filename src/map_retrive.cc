#include <iostream>
#include <map>

using namespace std;

template <typename T>
void template_test(T t)
{
    cout << "Just printing whatever is sent : " << t << endl;
}

template void template_test<int>(int);
template void template_test<string>(string);

int get_value(map<int, int> my_map, int key) {
    if(my_map.find(key) != my_map.end())
        return my_map[key];
    return -1;
}
