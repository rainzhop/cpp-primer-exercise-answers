#include <string>

using std::string;

// TypeOuter ==> string
// Exercise::Type ==> double

typedef string TypeOuter;
TypeOuter initVal();

class Exercise 
{
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal();
private:
    int val;
};

Exercise::Type Exercise::setVal(Exercise::Type parm)
{
    val = parm + Exercise::initVal();
    return val;
}
