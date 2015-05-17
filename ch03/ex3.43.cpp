#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    for (auto &row : ia)
    {
        for (auto e : row)
        {
            cout << e << " ";
        }
    }
    cout << endl;
    
    for (auto p = begin(ia); p != end(ia); ++p)
    {
        for (auto q = begin(*p); q != end(*p); ++q)
        {
            cout << *q << " ";
        }
    }
    cout << endl;

    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 4; ++j)
        {
            cout << ia[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}
