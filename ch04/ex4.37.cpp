#include <string>

using std::string;

int main()
{
    int i;
    double d;
    const string *ps;
    char *pc;
    void *pv;

    // (a)
    pv = static_cast<void *>(const_cast<string *>(ps));

    // (b)
    i = static_cast<int>(*pc);

    // (c)
    pv = static_cast<void *>(&d);

    // (d)
    pc = reinterpret_cast<char *>(pv);
    
    return 0;
}
