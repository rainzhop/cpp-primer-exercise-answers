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
    for (auto &r : ia)
    {
        for (auto i : r)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
