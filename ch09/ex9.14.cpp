#include <list>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    list<char *> lc = {"foo", "bar", "helloworld"};
    vector<string> vs;
    
    vs.assign(lc.begin(), lc.end());
    for (auto s : vs)
        cout << s << endl;

    return 0;
}
