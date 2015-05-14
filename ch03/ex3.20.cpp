#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

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
        cout << "the num of integer is too few." << endl;
        return 0;
    }

    cout << "sum of each pair of adjacent elements:" << endl;
    vector<int>::size_type idx;
    for (idx = 1; idx < ivec.size(); ++idx)
    {
        cout << ivec[idx] + ivec[idx - 1] << " ";
    }
    cout << endl;
    
    cout << "after change:" << endl;
    vector<int>::size_type lidx, ridx;
    vector<int>::size_type isize = ivec.size();
    for (lidx = 0, ridx = isize - 1; lidx < ridx; ++lidx, --ridx)
    {
        cout << ivec[lidx] + ivec[ridx] << " ";
    }
    if (lidx == ridx)
    {
        cout << ivec[lidx];
    }
    cout << endl;

    return 0;
}
