#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s, last_s;
    int repeat_flag = 0;
    while (cin >> s)
    {
        if (s == last_s && !s.empty())
        {
            repeat_flag = 1;
            break;
        }
        last_s = s;
    }

    if (repeat_flag == 1)
        cout << s << endl;
    else
        cout << "no repeat" << endl;

    return 0;
}
