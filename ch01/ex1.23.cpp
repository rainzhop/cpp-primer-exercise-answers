#include <iostream>
#include "include/Sales_item.h"

int main()
{
    int cnt = 0;
    Sales_item curr_item, item;

    if (std::cin >> item)
    {
        cnt = 1;
        curr_item = item;
    }
    
    while (std::cin >> item)
    {
        if (curr_item.isbn() == item.isbn())
        {
            ++cnt;
        }
        else
        {
            std::cout << "ISBN:" << curr_item.isbn() << " occurs "
                << cnt << " times." << std::endl;
            cnt = 1;
        }

        curr_item = item;
    }
    
    std::cout << "ISBN:" << curr_item.isbn() << " occurs "
        << cnt << " times." << std::endl;

    return 0;
}
