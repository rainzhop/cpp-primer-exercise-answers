#include <string>
#include <iostream>

using namespace std;

void replace(string &s, const string &oldVal, const string &newVal)
{
    auto pos = 0;
    while (pos <= s.size() - oldVal.size())
    {
        if (oldVal == s.substr(pos, oldVal.size()))
        {
            //s.erase(pos, oldVal.size());
            //s.insert(pos, newVal);
            s.replace(pos, oldVal.size(), newVal);
            pos += newVal.size();
        }
        ++pos;
    }
}

int main()
{
    string s = "foothobarthru";
    replace(s, "tho", "though");
    replace(s, "thru", "through");
    cout << s << endl;
    return 0;
}
