#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    
    /* before change */
    //if (s1 == s2)
    //{
    //    cout << "two strings are equal." << endl;
    //}
    //else if (s1 < s2)
    //{
    //    cout << "the first string is smaller." << endl;
    //}
    //else
    //{
    //    cout << "the second string is smaller." << endl;
    //}

    /* after change */
    auto len1 = s1.size();
    auto len2 = s2.size();
    if (len1 == len2)
    {
        cout << "two strings have the same length." << endl;
    }
    else if (len1 < len2)
    {
        cout << "the first string is shorter." << endl;
    }
    else
    {
        cout << "the second string is shorter." << endl;
    }

    return 0;
}
