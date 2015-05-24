#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " is even" << endl;
    }
    else
    {
        cout << n << " is odd" << endl;
    }

    return 0;
}

