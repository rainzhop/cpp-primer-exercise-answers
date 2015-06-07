#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv)
{
    string s(argv[0]);
    s = s + argv[1];

    cout << s << endl;
    return 0;
}
