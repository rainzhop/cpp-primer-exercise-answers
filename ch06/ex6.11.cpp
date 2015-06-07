#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void reset(int &i)
{
    i = 0;
}

int main()
{
    int a = 123;
    cout << "before reset, a = " << a << endl;
    reset(a);
    cout << "after reset, a = " << a << endl;

    return 0;
}
