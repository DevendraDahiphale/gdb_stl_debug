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
void get_value(map<T, S> &smap, T key) 
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

template void get_value<int,int>(map<int,int>, int);
template void get_value<int, vector<int>(map<int, vector<int>>, int);
