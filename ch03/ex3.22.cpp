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
    vector<string> text;
    string s;
    while (getline(cin, s))
    {
        text.push_back(s);
    }

    for (auto it = text.begin(); 
            it != text.end() && !it->empty(); ++it)
    {
        for (auto &c : *it)
        {
            c = toupper(c);
        }
        cout << *it << endl;
    }

    return 0;
}
