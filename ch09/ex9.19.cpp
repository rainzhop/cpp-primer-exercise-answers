#include <string>
#include <list>
#include <iostream>

using namespace std;

int main()
{
    string s;
    list<string> ls;
    while (cin >> s)
    {
        ls.push_back(s);
    }

    auto it = ls.begin();
    while (it != ls.end())
    {
        cout << *it << endl;
        ++it;
    }

    return 0;
}
