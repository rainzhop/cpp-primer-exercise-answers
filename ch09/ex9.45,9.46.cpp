#include <string>
#include <iostream>

using namespace std;

string headtail(string &s, const string &head, const string &tail)
{
    //s.insert(s.begin(), head.begin(), head.end());
    //s.append(tail);

    s.insert(0, head);
    s.insert(s.size(), tail);
    return s;
}

int main()
{
    string s = "hello";
    s = headtail(s, "foo", "bar");
    cout << s << endl;
    return 0;
}
