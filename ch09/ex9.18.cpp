#include <string>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
    string s;
    deque<string> ds;
    while (cin >> s)
    {
        ds.push_back(s);
    }

    auto it = ds.begin();
    while (it != ds.end())
    {
        cout << *it << endl;
        ++it;
    }

    return 0;
}
