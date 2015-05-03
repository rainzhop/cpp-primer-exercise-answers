#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s, word;

    while (cin >> word)
    {
        /* before change */
        //s += word;

        /* after change */
        s += word + ' ';
    }
    cout << s << endl;

    return 0;
}
