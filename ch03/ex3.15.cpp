#include <iostream>
#include <vector>
#include <string>

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

    return 0;
}
