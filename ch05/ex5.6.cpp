#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int score;
    while (cin >> score)
    {
        cout << "grade: ";
        cout << ((score < 0 || score > 100) ? "out of range." : \
            ((score < 60) ? "D" : \
             ((score < 80) ? "C" : \
              ((score < 90) ? "B" : \
               ((score < 100) ? "A" : "S"))))) << endl;

        cout << "grade: ";
        if (score < 0 || score > 100)
            cout << "out of range." << endl;
        else if (score < 60)
            cout << "D" << endl;
        else if (score < 80)
            cout << "C" << endl;
        else if (score < 90)
            cout << "B" << endl;
        else if (score < 100)
            cout << "A" << endl;
        else
            cout << "S" << endl;
    }

    return 0;
}
