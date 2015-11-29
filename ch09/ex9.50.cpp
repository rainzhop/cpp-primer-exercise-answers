#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    vector<string> vs = { "1", "10", "-100", "1000" };
    int sum = 0;
    for (auto s : vs)
    {
        sum += stoi(s);
    }
    cout << sum << endl;

    return 0;
}

