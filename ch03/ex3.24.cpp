#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int val;
    vector<int> ivec;
    while (cin >> val)
    {
        ivec.push_back(val);
    }
    if (ivec.size() < 2)
    {
        cout << "the num of integer too few." << endl;
        return 0;
    }

    cout << "sum of each pair of adjacent elements:" << endl;
    auto end = ivec.end();
    for (auto it = ivec.cbegin() + 1; it != ivec.cend(); ++it)
    {
        cout << *it + *(it - 1) << " ";
    }
    cout << endl;
    
    cout << "after change:" << endl;
    auto lit = ivec.cbegin();
    auto rit = ivec.cend() - 1;
    for (; lit < rit; lit++, rit--)
    {
        cout << *lit + *rit << " ";
    }
    if (lit == rit)
    {
        cout << *lit;
    }
    cout << endl;

    return 0;
}
