#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

void save_lines(string &file, vector<string> &vs)
{
    ifstream ifs(file);
    if (ifs)
    {
        string s;
        while (ifs >> s)
        {
            vs.push_back(s);
        }
    }

    return;
}

int main()
{
    string file(__FILE__);
    vector<string> vs;
    save_lines(file, vs);
    istringstream iss;
    for (auto line : vs)
    {
        iss.clear();
        iss.str(line);
        string s;
        while (iss >> s)
            cout << s << endl;

    }
    return 0;
}
