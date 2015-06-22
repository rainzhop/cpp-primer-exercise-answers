#ifndef EX_7_5_H
#define EX_7_5_H

#include <string>

using std::string;

class Person
{
    string name;
    string address;

    string getName() const {return name;}
    string getAddress() const {return address;}
};

#endif
