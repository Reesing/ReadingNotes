#include <iostream>

int main()
{
    int curVal, val;
    if (std::cin >> curVal)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (curVal == val)
            {
                ++cnt;
            }
            else
            {
                std::cout << curVal << " repeated " << cnt << " times." << std::endl;
                curVal = val;
                cnt = 1;
            }
        }
        std::cout << curVal << " repeated " << cnt << " times." << std::endl;
    }
    return 0;
}
