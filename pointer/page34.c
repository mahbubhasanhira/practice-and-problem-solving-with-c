#include <stdio.h>

int main()
{
    int x = 10, y;
    int *p, *q;

    p = &x;
    y = *p;
    *p = 15;
    *q = 20;

    printf("value of x: %d\n", &x); // 15
    printf("value of y: %d\n", &y); // 10
    printf("Address of *p: %p\n", &p);
    printf("Address of *q: %p\n", &q);

    /// total programme Segmentation fault output because of we declare pointer q (*q) but not used anywhere.
    return 0;
}