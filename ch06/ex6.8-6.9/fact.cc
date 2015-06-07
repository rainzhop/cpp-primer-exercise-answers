#include <iostream>
#include "Chapter6.h"

using std::cin;
using std::cout;
using std::endl;

int fact(int n)
{
    if (n <= 0)
    {
        cout << "wrong input." << endl;
        return n;
    }

    if (n == 1)
        return 1;
    else
        return fact(n - 1) * n;
}
