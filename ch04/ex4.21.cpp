#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto &i : ivec)
    {
        i = i % 2 != 0 ? 2*i : i;
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
