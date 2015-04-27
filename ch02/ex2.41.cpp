// pick ex1.22 to exercise

#include <iostream>
#include <string>

struct Sales_data
{
    std::string book_num;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data data;
    std::string book_num;
    int units_sold;
    double price;
    std::cin >> data.book_num >> data.units_sold >> price;
    data.revenue = data.units_sold * price;

    while (1)
    {
        std::cin >> book_num >> units_sold >> price;
        if (book_num != data.book_num)
        {
            break;
        }
        data.units_sold += units_sold;
        data.revenue += units_sold * price;
    }

    price = data.revenue / data.units_sold;
    std::cout << data.book_num << " " << data.units_sold << " " \
        << data.revenue << " " << price << std::endl;

    return 0;
}
