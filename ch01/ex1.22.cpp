#include <iostream>
#include "include/Sales_item.h"

int main()
{
    Sales_item sum, item;
    if (std::cin >> sum)
    {
        while (std::cin >> item)
        {
            if (sum.isbn() == item.isbn())
            {
                sum += item;
            }
        }
    } 

    std::cout << "sum of all the transactions is:" 
        << std::endl << sum << std::endl;

    return 0;
}
