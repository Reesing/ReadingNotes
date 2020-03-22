#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total, cur;
    if (std::cin >> total)
    {
        while (std::cin >> cur)
        {
            if (total.isbn() == cur.isbn())
            {
                total += cur;
            }
            else
            {
                std::cout << total << std::endl;
                total = cur;
            }
        }
        std::cout << total << std::endl;
        return 0;
    }
    else
    {
        std::cerr << "No record!" << std::endl;
        return -1;
    }
}
