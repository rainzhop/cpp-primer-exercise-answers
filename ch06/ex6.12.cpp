#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// this one is better than pointer version
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;

    return;
}

int main()
{
    int a = 123;
    int b = 456;
    cout << "before swap: " << a << " " << b << endl;
    swap(a, b);
    cout << "after swap: " << a << " " << b << endl;

    return 0;
}
