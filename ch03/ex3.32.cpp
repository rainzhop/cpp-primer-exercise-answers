#include <cstddef>
#include <vector>

using std::vector;

int main()
{
    const size_t array_size = 10;
    int ia[array_size];
    int ia2[array_size];
    vector<int> ivec;
    for (size_t i = 0; i < 10; ++i)
    {
        ia[i] = i;
        ia2[i] = ia[i];
        ivec.push_back(i);
    }

    return 0;
}
