#include <vector>
#include <iostream>

using namespace std;

vector<int>::iterator search(vector<int>::iterator left, \
        vector<int>::iterator right, int n)
{
    while (left != right)
    {
        if (*left == n)
        {
            break;
        }
        ++left;
    }

    return left;
}

int main()
{
    vector<int> vi = {1,2,3,5,7};
    auto it = search(vi.begin(), vi.end(), 6);
    cout << *it << endl;

    return 0;
}
