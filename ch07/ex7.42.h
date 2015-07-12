#include <string>

using std::string;

class Employee
{
public:
    Employee(string n, string d, int a):
        name(n), dpt(d), age(a) {  }
    Employee(string n):
        Employee(n, "unknown", -1) {  }
    Employee(string n, string d):
        Employee(n, d, -1) {  }
private:
    string name;
    string dpt;
    int age;
};
