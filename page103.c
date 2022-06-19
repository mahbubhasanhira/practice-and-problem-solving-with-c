#include <stdio.h>

double add(double a, double b)
{
    return a + b;
}
int main()
{
    double c = add(7, 6);
    printf("%lf", c);
    return 0;
}
