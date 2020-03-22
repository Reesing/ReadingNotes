#include <iostream>

int main()
{
    std::cout << "Please enter two integers: ";
    int v1, v2;
    std::cin >> v1 >> v2;
    while ( v1 < v2 )
    {
        std::cout << v1 << ", ";
        ++v1;
    }
    std::cout << v1 << std::endl;
    return 0;
}
