#include <iostream>

using std::cout;
using std::endl;

void print(const int i)
{
    cout << i << endl;
}

void print(const int ia[], size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        cout << ia[i] << endl;
    }
}
