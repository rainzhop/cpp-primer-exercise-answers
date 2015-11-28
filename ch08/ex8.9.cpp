#include <iostream>
#include <string>
#include <sstream>

std::istream &func(std::istream &is)
{
    std::string s;
    while (is >> s)
    {
        std::cout << s << std::endl;
    }
    is.clear();
    return is;
}

int main()
{
    std::string s("hello world foo bar");
    std::istringstream iss(s);
    func(iss);
    std::cout << std::cin.rdstate() << std::endl;
    return 0;
}
