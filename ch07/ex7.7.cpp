#include <iostream>
#include <string>
#include "ex7.6.h"

using std::cin; 
using std::cout; 
using std::cerr;
using std::endl; 
using std::string;

int main()
{
    Sales_data total;
    cout << "input sales_data(bookNo, units_sold, revenue): " << endl;
    if (read(cin, total))
    {
        Sales_data trans;
        while (read(cin, trans)) 
        {
            if (total.bookNo == trans.bookNo) 
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else 
            {
                cout << "total for bookNo = " << total.bookNo << ": ";
                print(cout, total);
                total = trans;
            }
        }
        cout << "total for bookNo = " << total.bookNo << ": ";
        print(cout, total);
    }
    else
    {
        cerr << "Input error." << endl;
        return -1;
    }
    return 0;
}
