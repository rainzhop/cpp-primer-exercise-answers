#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int ia[20];
    vector<int> ivec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int j = 0;
    for (auto i : ivec)
    {
        ia[j] = i;
        cout << ia[j] << " ";
        ++j;
    }
    cout << endl;

    return 0;
}
