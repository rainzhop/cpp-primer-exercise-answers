#ifndef EX_7_21_H 
#define EX_7_21_H 

#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

class Sales_data;
istream &read(istream &is, Sales_data &item);

class Sales_data
{
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    friend istream &read(istream &is, Sales_data &item);
    friend ostream &print(ostream &os, const Sales_data &item);
private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
public:
    string isbn() const {return bookNo;}
    Sales_data &combine(const Sales_data &);

    //Sales_data() = default;
    Sales_data(): bookNo("default"), units_sold(0), revenue(0) {  };
    //Sales_data(const std::string &s): bookNo(s) {  };
    Sales_data(const std::string &s, unsigned n = 0, double p = 0.0): 
        bookNo(s), units_sold(n), revenue(p * n) {  };
    Sales_data(istream &is) { read(is, *this); }
};

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);

    return sum;
}

istream &read(istream &is, Sales_data &item)
{
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;

    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
        << item.revenue << endl;

    return os;
}

#endif
