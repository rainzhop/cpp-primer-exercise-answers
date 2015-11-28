#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v1 = {1,2,3,4};
    vector<int> v2 = {1,2,3,4};

    if (v1 == v2)
        cout << "v1 == v2" << endl;
    else
        cout << "v1 != v2" << endl;

    return 0;
}
