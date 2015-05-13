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

    return 0;
}
