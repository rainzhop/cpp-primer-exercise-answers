#include <iostream>
#include <string>

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
    func(std::cin);
    std::cout << std::cin.rdstate() << std::endl;
    return 0;
}
