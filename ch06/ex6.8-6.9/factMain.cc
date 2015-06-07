#include <iostream>
#include "Chapter6.h"

using std::cin;
using std::cout;
using std::endl;

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
