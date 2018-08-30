#include <iostream>
#include <map>

using namespace std;

void test_int_int() {
    map<int, int> my_map;

    for(int i = 0; i < 10; i++)
        my_map[i] = i*i;

    cout << "Success map<int, int>" << endl;
}

void test_int_string() {
    map<int, string> my_map;

    for(int i = 0; i < 10; i++)
        my_map[i] = to_string(i * i);

    cout << "Success map<int, string>" << endl;
}

int main(int argc, char *argv[]) {
    // test for key: int and value: int type
    test_int_int();

    return 0;
}
