#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i;
    while (cin >> i)
    {
        if (i == 42)
            break;
    }

    return 0;
}
