#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void save_lines(string &file, vector<string> &vs)
{
    ifstream ifs(file);
    if (ifs)
    {
        string s;
        while (getline(ifs, s))
        {
            vs.push_back(s);
        }
    }

    return;
}

int main(int argc, char **argv)
{
    if (argc == 1)
        cout << "please specify the input file." << endl;
        return -1;
    string file(argv[1]);
    vector<string> vs;
    save_lines(file, vs);
    for (auto line : vs)
        cout << line << endl;
    return 0;
}
