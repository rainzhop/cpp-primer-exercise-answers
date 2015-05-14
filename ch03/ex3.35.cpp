#include <iterator>

using std::begin;
using std::end;

int main()
{
    int ia[10] = {0,1,2,3,4,5,6,7,8,9};
    for (auto p = begin(ia); p != end(ia); ++p)
    {
        *p = 0;
    }

    return 0;
}
