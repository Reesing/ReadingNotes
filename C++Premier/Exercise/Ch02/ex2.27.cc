#include <iostream>

int main()
{
    // This is illegal:
    // int i = -1, &r = 0;
    // std::cout << i << " " << r << std::endl;

    const int i = -1, &r = 0;
    std::cout << i << " " << r << std::endl;

    return 0;
}
