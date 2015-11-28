#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int rv;
    vector<int> vi;

    rv = vi.at(0);
    cout << rv << endl;
    rv = vi[0];
    cout << rv << endl;
    rv = vi.front();
    cout << rv << endl;
    rv = *vi.begin();
    cout << rv << endl;

    return 0;
}
