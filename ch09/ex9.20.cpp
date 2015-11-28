#include <list>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
    list<int> li = {1,2,3,4,5};
    deque<int> di_even, di_odd;

    auto itl = li.begin();
    while (itl != li.end())
    {
        if (*itl % 2 == 0)
            di_even.push_back(*itl);
        else
            di_odd.push_back(*itl);
        ++itl;
    }

    return 0;
}
