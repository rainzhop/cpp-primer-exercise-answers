#include <iostream>

int main()
{
    int v1 = 0, v2 = 0, t = 0;

    std::cout << "Please enter two integers: " << std::endl;
    std::cin >> v1 >> v2;
    
    if (v2 < v1)
    {
        t = v1;
        v1 = v2;
        v2 = t;
    }

    for (t = v1; t <= v2; ++t)
    {
        std::cout << t << std::endl;
    }

    return 0;
}
