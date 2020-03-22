#include <iostream>

int main()
{
    int i = 0;
    int *const p1 = &i;         // top-level const
    const int ci = 42;          // top-level const
    const int *p2 = &ci;        // low-level const
    const int *const p3 = p2;   // left const is low-level const, while right one top-level const
    const int &r = ci;          // all refs for declaration are low-level const

    // top-level const assignment
    i = ci;
    p2 = p3;

    return 0;

}
