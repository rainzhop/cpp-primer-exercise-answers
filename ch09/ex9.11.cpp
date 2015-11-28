#include <vector>

using namespace std;

int main()
{
    vector<int> v1 = {1,2,3};
    vector<int> v2(v1);
    vector<int> v3 = v1;
    vector<int> v4 {1,2,3};
    vector<int> v5(3, 1);
    vector<int> v6(v1.begin(), v1.end());

    return 0;
}
