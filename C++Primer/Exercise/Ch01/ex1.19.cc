#include <iostream>

int main()
{
    std::cout << "Please enter two integers: ";
    int v1, v2, large, small;
    std::cin >> v1 >> v2;
    if (v1 >= v2)
    {
        large = v1;
        small = v2;
    }
    else
    {
        large = v2;
        small = v1;
    }

    while ( small < large )
    {
        std::cout << small << ", ";
        ++small;
    }
    std::cout << small << std::endl;
    return 0;
}
