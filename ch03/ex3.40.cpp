#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char ca1[] = "hello";
    char ca2[] = "world";
    char ca3[20] = {0};

    strcpy(ca3, ca1);
    strcat(ca3, ca2);

    cout << ca3 << endl;

    return 0;
}
