#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main()
{
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    vector<int> iv(begin(ia), end(ia));
    list<int> il(iv.begin(), iv.end());

    auto iter = il.begin();
    while (iter != il.end())
    {
        if (*iter % 2 != 0)
            iter = il.erase(iter);
        else
            ++iter;
    }

    auto iter2 = iv.begin();
    while (iter2 != iv.end())
    {
        if (*iter2 % 2 == 0)
            iter2 = iv.erase(iter2);
        else
            ++iter2;
    }

    iter = il.begin();
    while (iter != il.end())
    {
        cout << *iter << " ";
        ++iter;
    }
    cout << endl;

    iter2 = iv.begin();
    while (iter2 != iv.end())
    {
        cout << *iter2 << " ";
        ++iter2;
    }
    cout << endl;

    return 0;
}
