#ifndef EX_7_23_H 
#define EX_7_23_H 

#include <string>

using std::string;

class Screen 
{
public:
    using pos = string::size_type;
    
    Screen() = default;
    Screen(pos ht, pos wd, char c): 
        height(ht), width(wd), contents(ht * wd, c) {  }
    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const { return contents[r*width+c]; }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

#endif
