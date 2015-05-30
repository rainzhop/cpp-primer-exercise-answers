#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> iv1 = {0, 1, 1, 2};
    vector<int> iv2 = {0, 1, 1, 2, 3, 5, 8};

    auto sz = iv1.size() > iv2.size() ? iv2.size() : iv1.size();
    decltype(sz) i;
    for (i  = 0; i < sz; ++i)
    {
        if (iv1[i] != iv2[i])
            break;
    }
    if (i == sz)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
