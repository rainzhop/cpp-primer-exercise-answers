#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char c;
    int vowel_cnt = 0;
    int space_cnt = 0;
    int tab_cnt = 0;
    int newline_cnt = 0;

    cin >> std::noskipws; // Page 760

    while (cin >> c)
    {
        if (c == 'a' || c == 'e' || \
                c == 'i' || c == 'o' || c == 'u')
            ++vowel_cnt;
        if (c == 'a' || c == 'e' || \
                c == 'i' || c == 'o' || c == 'u')
            ++vowel_cnt;
        if (c == '\t')
            ++tab_cnt;
        if (c == ' ')
            ++space_cnt;
        if (c == '\n')
            ++newline_cnt;
    }

    cin >> std::skipws; // Page 760

    cout << "vowel_cnt: " << vowel_cnt << endl;
    cout << "space_cnt: " << space_cnt << endl;
    cout << "tab_cnt: " << tab_cnt << endl;
    cout << "newline_cnt: " << newline_cnt << endl;
    
    return 0;
}
