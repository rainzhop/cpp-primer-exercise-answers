#include <vector>

using std::vector;

int func(int, int);

int main()
{
    vector<decltype(func) *> funcvec;
    return 0;
}
