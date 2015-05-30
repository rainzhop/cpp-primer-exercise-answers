#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char c;

    while (cin >> c)
    {
        if (c == 'a' || c == 'e' || \
                c == 'i' || c == 'o' || c == 'u')
            ++vowel_cnt;
        if (c == 'a' || c == 'e' || \
                c == 'i' || c == 'o' || c == 'u')
            ++vowel_cnt;
    }

    cout << "vowel_cnt: " << vowel_cnt << endl;
    
    return 0;
}
