#include <iostream>
#include <unistd.h>

int main()
{
    std::cout << "I am in the buffer...";
    usleep(3000000);
    std::cout << std::endl;
    return 0;
}
