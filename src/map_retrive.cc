#include <algorithm>
#include <map>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void print_custom(const int &val)
{
    cout << val << endl;
}

void print_custom(const vector<int> &val)
{
    typedef vector<int> container;
    typename container::const_iterator it = val.begin();
    for(auto v:val)
        cout << v << " ";
    cout << "Vector of size:" << val.size() << endl;
}

template<typename T, typename S>
void findkey(map<T, S> &smap, T key) 
{
   typedef map<T, S> container;
   std::ostringstream sStream;
   for (typename container::const_iterator it = smap.begin(); it != smap.end(); ++it) {
        if(it->first == key) {
            cout <<  it->first << endl;
            print_custom(it->second);
        }
   }

   return;
}

template<typename T>
T print_string(T var) {
    string var1 = "pratik";
    if(var == var1)
        cout << "It is working" << endl;
    return var;
}

void func_dummy() {
    map<int, vector<int>> Mvec;
    map<int, int> Mint;
    print_string("abc");
    findkey(Mvec, 0);
    findkey(Mint, 0);
}

int print_key(map<int, int> M, int key)
{
    cout << "Maps size is:" << M.size() << endl;
    cout << "Key:" << " " << key << " " << M[key] << endl;
    return 0;
}

