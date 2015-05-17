#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    //typedef int (*row)[4];
    using row = int (*)[4];
    for (row r = ia; r != ia + 3; ++r)
    {
        for (auto i : *r)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
