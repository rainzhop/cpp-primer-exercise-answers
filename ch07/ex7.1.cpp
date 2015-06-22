#include <iostream>
#include <string>

using std::cin; 
using std::cout; 
using std::cerr;
using std::endl; 
using std::string;

struct Sales_data
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data total;
    cout << "input sales_data(bookNo, units_sold, revenue): " << endl;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        cout << "input sales_data(bookNo, units_sold, revenue): " << endl;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) 
        {
            cout << "input sales_data(bookNo, units_sold, revenue): " << endl;
            if (total.bookNo == trans.bookNo) 
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else 
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else
    {
        cerr << "Input error." << endl;
        return -1;
    }
    return 0;
}
