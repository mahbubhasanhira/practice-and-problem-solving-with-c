#include <stdio.h>

int main()
{
    int *p = NULL;
    *p = 100;
    printf("Value of *p: %d\n", *p); // Segmentation fault ==> because of p don't point any address

    return 0;
}