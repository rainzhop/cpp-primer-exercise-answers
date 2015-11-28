#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string word;
    vector<string> vs;
    auto iter = vs.begin();
    while (cin >> word)
        iter = vs.insert(iter, word);

    return 0;
}
