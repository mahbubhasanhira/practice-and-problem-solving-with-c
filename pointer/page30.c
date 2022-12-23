#include <stdio.h>

int main()
{
    int x = 10;
    int *p;
    p = &x;
    printf("valur of x: %d\n", x);
    *p = 20;
    printf("value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("value of p: %p\n", p);
    printf("content of p: %d\n", *p);
    return 0;
}