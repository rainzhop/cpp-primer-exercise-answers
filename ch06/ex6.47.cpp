#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

using iter = vector<int>::iterator;

void printv(iter begin, iter end)
{
#ifndef NDEBUG
    cout << "size of vector: " << end - begin << endl;
#endif
    if (begin == end)
        return;
    cout << *begin << endl;
    ++begin;
    printv(begin, end);
    return;
}

int main(int argc, char **argv)
{
    vector<int> iv = {1,2,3,4,5,6,7};
    printv(iv.begin(), iv.end());

    return 0;
}
