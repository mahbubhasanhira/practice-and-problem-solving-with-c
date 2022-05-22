#include <stdio.h>

int main()
{
    double a1, a2, b1, b2, c1, c2, x, y, d;
    printf("The value of a1: ");
    scanf("%lf", &a1);
    printf("The value of a2: ");
    scanf("%lf", &a2);
    printf("The value of b1: ");
    scanf("%lf", &b1);
    printf("The value of b2: ");
    scanf("%lf", &b2);
    printf("The value of c1: ");
    scanf("%lf", &c1);
    printf("The value of c2: ");
    scanf("%lf", &c2);
    d = a1 * b2 - a2 * b1;
    if ((int)d == 0)
    {
        printf("Value of x and y can not be determined.\n");
    }
    else
    {
        x = (b2 * c1 - b1 * c2) / d;
        y = (a1 * c2 - a2 * c1) / d;
        printf("The value of x and y is: %0.2lf and %0.2lf\n", x, y);
    }
    return 1;
}