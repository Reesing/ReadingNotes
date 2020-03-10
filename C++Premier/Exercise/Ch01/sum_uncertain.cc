#include <iostream>

int main()
{
    int sum = 0, val = 0;
    std::cout << "Please enter some integers: ";
    while (std::cin >> val)
    {
        sum += val;
    }
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}
