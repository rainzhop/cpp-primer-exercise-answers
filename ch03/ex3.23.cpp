#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec(10);
    for (decltype(ivec.size()) i = 0; i < ivec.size(); ++i)
        ivec[i] = i;
    
    for (auto it = ivec.begin(); it != ivec.end(); ++it)
        *it = *it * 2;

    for (auto n : ivec)
        cout << n << " ";
    cout << endl;

    return 0;
}
