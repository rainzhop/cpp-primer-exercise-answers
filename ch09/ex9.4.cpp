#include <vector>
#include <iostream>

using namespace std;

bool search(vector<int>::iterator left, vector<int>::iterator right, int n)
{
    while (left != right)
    {
        if (*left == n)
        {
            return true;
        }
        ++left;
    }

    return false;
}

int main()
{
    vector<int> vi = {1,2,3,5,6,7};
    if (search(vi.begin(), vi.end(), 6))
    {
        cout << "exist" << endl;
    }
    else
    {
        cout << "not exist" << endl;
    }

    return 0;
}
