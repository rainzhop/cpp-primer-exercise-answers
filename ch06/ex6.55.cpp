#include <vector>

using std::vector;

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b == 0)
        return 0;
    return a / b;
}

int func(int, int);

int main()
{
    vector<decltype(func) *> funcvec;
    funcvec.push_back(add);
    funcvec.push_back(subtract);
    funcvec.push_back(multiply);
    funcvec.push_back(divide);
    return 0;
}
