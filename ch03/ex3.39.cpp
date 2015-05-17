#include <string>
#include <iostream>
#include <cstring>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2)
    {
        cout << "s1 == s2" << endl;
    }
    else if (s1 < s2)
    {
        cout << "s1 < s2" << endl;
    }
    else
    {
        cout << "s1 > s2" << endl;
    }

    const char *s1_cstr = s1.c_str();
    const char *s2_cstr = s2.c_str();
    if (strcmp(s1_cstr, s2_cstr) == 0)
    {
        cout << "s1 == s2" << endl;
    }
    else if (strcmp(s1_cstr, s2_cstr) < 0)
    { 
        cout << "s1 < s2" << endl;
    }
    else
    { 
        cout << "s1 > s2" << endl;
    }
    return 0;
}
