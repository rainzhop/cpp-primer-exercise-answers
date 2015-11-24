#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void save_lines(string &in, string &out)
{
    ifstream ifs(in);
    ofstream ofs(out, ofstream::app);
    if (ifs && ofs)
    {
        string s;
        while (getline(ifs, s))
        {
            ofs << s << endl;
        }
    }

    return;
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        cout << "please specify the input and output file." << endl;
        return -1;
    }
    string infile(argv[1]);
    string outfile(argv[2]);
    save_lines(infile, outfile);
    return 0;
}
