#include <iostream>

using std::cout;
using std::endl;

int func()
{
    static int i = -1;
    ++i;

    return i;
}

int main()
{
    int i = 0;
    while (i++ < 10)
        cout << func() << " ";
    cout << endl;
    return 0;
}
