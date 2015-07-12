#include <string>

using std::string;

struct Sales_data {
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

int main()
{
    Sales_data i = {"hello", 1, 5};
    return 0;
}
