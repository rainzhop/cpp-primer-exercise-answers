#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> vi = {1,2,3,4,5};

    // fixed, double the odds
    auto iter = vi.begin();
    while (iter != vi.end())
    {
        if (*iter % 2) // odd
        {
            iter = vi.insert(iter, *iter);
            ++iter;
        }
        ++iter;
    }

    iter = vi.begin();
    while (iter != vi.end())
    {
        cout << *iter << " ";
        ++iter;
    }
    cout << endl;
    
    return 0;
}
