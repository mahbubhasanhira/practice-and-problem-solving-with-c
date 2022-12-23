#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    printf("Value of x: %d\n", x); // 10

    p = &x;
    *p = 20;

    printf("Value of x: %d\n", x); // 20

    x = 15;

    printf("Value of x: %d\n", x);                        // 15
    printf("Value stored at location %p is %d\n", p, *p); // (value of p or address of x) and 15

    printf("Address of x: %p\n", &x); // address of x
    printf("Value of p: %p\n", p);    // address of x

    return 0;
}