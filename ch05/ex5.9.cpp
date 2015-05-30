#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s;
    int vowel_cnt = 0;
    while (cin >> s)
    {
        vowel_cnt = 0;
        for (auto c : s)
        {
            if (c == 'a' || c == 'e' || \
                    c == 'i' || c == 'o' || c == 'u')
                ++vowel_cnt;
        }
        cout << vowel_cnt << endl;
    }

    return 0;
}
