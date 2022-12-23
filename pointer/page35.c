#include <stdio.h>

int main()
{
    int x = 10, y;
    int *p, *q;

    p = &x;
    q = &y;
    *p = 15;
    *q = 20;

    printf("value of x: %d\n", x);  // 15
    printf("value of y: %d\n", y);  // 20
    printf("value of p: %d\n", *p); // 15
    printf("value of x: %d\n", *q); // 20

    return 0;
}