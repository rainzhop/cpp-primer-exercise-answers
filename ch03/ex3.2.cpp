#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s;

    /* once a line */
    //while (getline(cin ,s))
    //{
    //    cout << s << endl;
    //}

    /* once a word */
    while (cin >> s)
    {
        cout << s << endl;
    }

    return 0;
}
