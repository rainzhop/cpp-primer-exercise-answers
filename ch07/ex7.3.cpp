#include <iostream>
#include <string>
#include "ex7.2.h"

using std::cin; 
using std::cout; 
using std::cerr;
using std::endl; 
using std::string;

int main()
{
    Sales_data total;
    cout << "input sales_data(bookNo, units_sold, revenue): " << endl;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) 
        {
            if (total.bookNo == trans.bookNo) 
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else 
            {
                cout << "total for bookNo = " << total.bookNo << ":";
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << "total for bookNo = " << total.bookNo << ":";
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else
    {
        cerr << "Input error." << endl;
        return -1;
    }
    return 0;
}
