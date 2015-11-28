#include <forward_list>
#include <string>
#include <iostream>

using namespace std;

void insert(forward_list<string> &flst, string s1, string s2)
{
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end())
    {
        if (*curr == s1)
        {
            curr = flst.insert_after(curr, s2);
            break;
        }
        else
        {
            ++curr;
        }
        ++prev;
    }

    if (curr == flst.end())
        flst.insert_after(prev, s2);
}

int main()
{
    forward_list<string> flst = { "haha", "foo", "bar", "hello" };
    string s1 = "far";
    string s2 = "bar";

    insert(flst, s1, s2);

    auto curr = flst.begin();
    while (curr != flst.end())
    {
        cout << *curr << endl;
        ++curr;
    }

    return 0;
}
