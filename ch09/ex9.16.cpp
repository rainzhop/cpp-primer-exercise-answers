#include <vector>
#include <list>
#include <iostream>

using namespace std;

int lv_cmp(list<int> &li, vector<int> &vi)
{
    auto itl = li.begin();
    auto itv = vi.begin();
    for (; itv != vi.end() || itl != li.end(); ++itl, ++itv)
    {
        if (*itl == *itv)
            continue;
        else if (*itl < *itv)
            return -1;
        else
            return 1;
    }

    if (itl == li.end() && itv == vi.end())
        return 0;
    else if (itv == vi.end())
        return 1;
    else if (itl == li.end())
        return -1;

    cout << "how" << endl;
}



int main()
{
    list<int> li = {1,2,3,4,5};
    vector<int> vi = {1,2,3,5};
    cout << lv_cmp(li, vi) << endl;

    return 0;
}
