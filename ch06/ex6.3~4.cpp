#include <iostream>

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

int main()
{
    int n;
    cout << "input a positive int: ";
    while (cin >> n)
    {
        cout << "fact: " << fact(n) << endl;
        cout << "input a positive int: ";
    }
    cout << endl;

    return 0;
}
