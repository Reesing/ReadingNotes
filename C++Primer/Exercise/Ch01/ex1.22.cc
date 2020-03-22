#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sumItem, item;
    if (std::cin >> sumItem)
    {
        while (std::cin >> item)
        {
            sumItem += item;
        }
    }
    std::cout << sumItem << std::endl;

    return 0;
}
