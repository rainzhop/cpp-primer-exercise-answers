#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
    forward_list<int> flst = {1,2,3,4,5,6};
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end())
    {
        if (*curr % 2 != 0)
        {
            cout << *curr << endl;
            curr = flst.erase_after(prev);
        }
        else
        {
            ++prev;
            ++curr;
        }
    }

    return 0;
}
