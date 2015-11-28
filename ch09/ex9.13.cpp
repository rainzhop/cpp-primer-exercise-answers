#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<int> li {1,2,3};
    for (auto i : li)
        cout << i << " ";
    cout << endl;

    vector<double> vd(li.begin(), li.end());
    for (auto d : vd)
        cout << d << " ";
    cout << endl;

    return 0;
}
