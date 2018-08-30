#include <iostream>
#include <map>

using namespace std;

template<typename T, typename S>
void test() {
    map<T, S> my_map;

    for(int i = 0; i < 10; i++)
        my_map[i] = i*i;

    cout << "Success" << endl;
}

int main(int argc, char *argv[]) {
    // test for key: int and value: int type
    test<int, int>();
    return 0;
}
