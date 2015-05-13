#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout << "v1 size:" <<  v1.size() << endl;
    for (auto a : v1)
    {
        cout << a << " ";
    }
    cout << endl << endl;
    
    cout << "v2 size:" <<  v2.size() << endl;
    for (auto a : v2)
    {
        cout << a << " ";
    }
    cout << endl << endl;

    cout << "v3 size:" <<  v3.size() << endl;
    for (auto a : v3)
    {
        cout << a << " ";
    }
    cout << endl << endl;

    cout << "v4 size:" <<  v4.size() << endl;
    for (auto a : v4)
    {
        cout << a << " ";
    }
    cout << endl << endl;

    cout << "v5 size:" <<  v5.size() << endl;
    for (auto a : v5)
    {
        cout << a << " ";
    }
    cout << endl << endl;

    cout << "v6 size:" <<  v6.size() << endl;
    for (auto a : v6)
    {
        cout << a << " ";
    }
    cout << endl << endl;

    cout << "v7 size:" <<  v7.size() << endl;
    for (auto a : v7)
    {
        cout << a << " ";
    }
    cout << endl << endl;

    return 0;
}
