#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int n = ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2);
    cout << n << endl;
    n = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    cout << n << endl;

    return 0;
}

