#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s("helloworld");
    
    for (char &c : s)
    {
        c = 'X';        
    }

    cout << s << endl;

    return 0;
}
