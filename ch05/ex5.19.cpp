#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1, s2;
    do {
        cout << "plz input 2 string: " << endl;
        cin >> s1 >> s2;
        cout << "less one is " << (s1 < s2 ? s1 : s2) << endl;
    } while (1);

    return 0;
}
