#ifndef EX_7_27_H 
#define EX_7_27_H 

#include <string>
#include <iostream>

using std::cout;
using std::ostream;
using std::string;

class Screen 
{
public:
    using pos = string::size_type;
    
    Screen() = default;
    Screen(pos ht, pos wd): 
        height(ht), width(wd), contents(ht * wd, ' ') {  }
    Screen(pos ht, pos wd, char c): 
        height(ht), width(wd), contents(ht * wd, c) {  }
    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const { return contents[r*width+c]; }

    inline Screen& move(pos r, pos c);
    inline Screen& set(char c);
    inline Screen& set(pos r, pos col, char ch);
    const Screen& display(ostream &os) const { do_display(os); return *this; }
    Screen& display(ostream &os) { do_display(os); return *this; }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

    void do_display(ostream &os) const { os << contents; }
};

inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::move(pos r, pos c)
{
    cursor = r * width + c;
    return *this;
}

inline Screen& Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch;
    return *this;
}

#endif
