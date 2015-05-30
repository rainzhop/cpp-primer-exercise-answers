#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s, last_s, result_s;
    int curr_cnt = 0, max_cnt = 0;
    while (cin >> s)
    {
        if (last_s == s && !s.empty())
        {
            ++curr_cnt;
            continue;
        }
        else if (curr_cnt > max_cnt)
        {
            max_cnt = curr_cnt;
            result_s = last_s;
        }

        curr_cnt = 1;
        last_s = s;
    }
    if (curr_cnt > max_cnt)
    {
        max_cnt = curr_cnt;
        result_s = last_s;
    }

    if (max_cnt <= 1)
        cout << "no repeat" << endl;
    else
    {
        cout << "result_s: " << result_s << endl;
        cout << "occurence: " << max_cnt << endl;
    }

    return 0;
}
