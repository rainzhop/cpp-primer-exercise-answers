#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

bool contain_capital_letter(const string &s)
{
    for (auto c : s)
        if (isupper(c))
            return true;

    return false;
}

void str_to_lower(string &s)
{
    for (auto &c : s)
        c = tolower(c);

    return;
}

int main()
{
    string s("Hello, World!");
    cout << "s contains capital letter ? " << 
        contain_capital_letter(s) << endl;
    str_to_lower(s);
    cout << "s to lower " << s << endl;

    return 0;
}
