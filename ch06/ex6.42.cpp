#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string make_plural(size_t ctr, const string &word,
        const string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    cout << make_plural(1, "apple") << endl;
    cout << make_plural(10, "apple") << endl;
    cout << make_plural(10, "apple", "z") << endl;

    return 0;
}

