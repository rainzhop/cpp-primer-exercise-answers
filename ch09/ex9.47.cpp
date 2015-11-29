#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s = "ab2c3d7R4E6";
    string digits = "0123456789";

    string t = s;
    auto pos = 0;
    while (pos != string::npos)
    {
        pos = t.find_first_of(digits);
        cout << t[pos] << " ";
        t = t.substr(pos + 1);
    }
    cout << endl;

    t = s;
    pos = 0;
    while (pos != string::npos)
    {
        pos = t.find_first_not_of(digits);
        cout << t[pos] << " ";
        t = t.substr(pos + 1);
    }
    cout << endl;

    return 0;
}
