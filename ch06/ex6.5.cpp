#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int abs(int n)
{
    if (n >= 0)
        return n;
    else
        return -n;
}

int main()
{
    int n;
    cout << "input an int: ";
    while (cin >> n)
    {
        cout << "abs: " << abs(n) << endl;
        cout << "input an int: ";
    }
    cout << endl;

    return 0;
}
