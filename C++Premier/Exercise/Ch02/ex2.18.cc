#include <iostream>

int main()
{
    int val = 12;
    int *pval = &val;
    std::cout << "val = " << val << std::endl;
    std::cout << "&val = " << &val << std::endl;
    std::cout << "pval = " << pval << std::endl;
    std::cout << "*pval = " << *pval << std::endl;
    std::cout << std::endl;

    int newval = 100;
    pval = &newval;
    std::cout << "newval = " << newval << std::endl;
    std::cout << "&newval = " << &newval << std::endl;
    std::cout << "pval = " << pval << std::endl;
    std::cout << "*pval = " << *pval << std::endl;
    std::cout << std::endl;

    *pval = 1;
    std::cout << "pval = " << pval << std::endl;
    std::cout << "*pval = " << *pval << std::endl;
    std::cout << "newval = " << newval << std::endl;
    std::cout << "&newval = " << &newval << std::endl;

    return 0;
}
