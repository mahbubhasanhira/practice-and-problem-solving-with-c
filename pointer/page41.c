#include <stdio.h>

int main()
{
    char c = 'A';
    char *p, **q;

    p = &c;
    q = &p;
    **q = 'B';
    printf("value of c: %c\n", c);   // B
    printf("value of c: %c\n", *p);   // B
    printf("value of c: %c\n", **q); // B

    return 0;
}