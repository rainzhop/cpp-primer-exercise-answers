#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    string s;
    vector<string> svec;
    while (cin >> s)
    {
        svec.push_back(s);
    }

    int i = 1;
    for (auto &s : svec)
    {
        for (auto &c : s)
        {
            c = toupper(c);
        }

        cout << s << " ";
        if (i++ % 8 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;

    return 0;
}
