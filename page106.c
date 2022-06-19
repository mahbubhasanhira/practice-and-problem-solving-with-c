#include <stdio.h>

double add(double a, double b);

int main()
{
    double c = add(2, 6);
    printf("%lf", c);
    return 0;
}

double add(double a, double b)
{
    return a + b;
};
