#include <stdio.h>

int main()
{
    char c = 'A';
    char *p, **q;

    p = &c;
    q = &p;

    printf("value of c: %c\n", c);   // A
    printf("value of c: %c\n", *p);   // A
    printf("value of c: %c\n", **q); // A

    return 0;
}