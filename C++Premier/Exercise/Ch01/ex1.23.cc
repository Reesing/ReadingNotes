#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item curItem, item;
    if (std::cin >> curItem)
    {
        int cnt = 1;
        while (std::cin >> item)
        {
            if (curItem.isbn()==item.isbn())
            {
                ++cnt;
            }
            else
            {
                std::cout << "Book " << curItem.isbn() << " has " 
                    << cnt << " records." << std::endl;
                curItem = item;
                cnt = 1;
            }
        }
        std::cout << "Book " << curItem.isbn() << " has " 
            << cnt << " records." << std::endl;
        return 0;
    }
    else
    {
        std::cerr << "No records." << std::endl;
        return -1;
    }

}
