#include <iostream>

int main()
{
    bool a = 0;
    bool b = 12;
    std::cout << "int->bool: a = " << a << std::endl;
    std::cout << "int->bool: b = " << b << std::endl;

    long i = 1000000000000;
    double d = i;
    std::cout << "long->double: d = " << d << std::endl;

    unsigned char c1 = -180;
    std::cout << "int->unsigned char: c1 = " << c1 << std::endl;

    signed char c2 = 80;
    std::cout << "int->signed char: c2 = " << c2 << std::endl;

    return 0;
}
