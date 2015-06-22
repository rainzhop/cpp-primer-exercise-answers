#ifndef EX_7_2_H 
#define EX_7_2_H 

#include <string>

using std::string;

struct Sales_data
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    string isbn() const {return bookNo;}
    Sales_data &combine(const Sales_data &);
};

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}

#endif
