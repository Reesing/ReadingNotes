#include <iostream>

int main()
{
    int i = 1;
    std::cout << "Original value of i = " << i << std::endl;
    int &ri = i;
    std::cout << "Value of ri = " << ri << std::endl;
    ri = 4;
    std::cout << "ri <- 4 " << std::endl;
    std::cout << "Value of i = " << i << std::endl;
    std::cout << "Value of ri = " << ri << std::endl;

    // const
    const int &ci = ri;
    std::cout << "Value of ci = " << ci << std::endl;
    ri = 8;
    std::cout << "ri <- 8 " << std::endl;
    std::cout << "Value of i = " << i << std::endl;
    std::cout << "Value of ri = " << ri << std::endl;
    std::cout << "Value of ci = " << ci << std::endl;

    i = 10;
    std::cout << "i <- 10 " << std::endl;
    std::cout << "Value of i = " << i << std::endl;
    std::cout << "Value of ri = " << ri << std::endl;
    std::cout << "Value of ci = " << ci << std::endl;

    // const <- double
    double d = 3.14;
    const int cd = d;
    const int &crd = d;
    std::cout << "Value of cd = " << cd << std::endl;
    std::cout << "Value of crd = " << crd << std::endl;

    d = 10.3;
    std::cout << "Value of cd = " << cd << std::endl;
    std::cout << "Value of crd = " << crd << std::endl;


    return 0;
}
