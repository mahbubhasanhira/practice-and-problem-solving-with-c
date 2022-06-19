#include <stdio.h>

double PI = 3.14;
void my_func()
{
    PI = 3.1416;
}

int main()
{
    printf("%lf\n", PI);
    my_func();
    printf("%lf", PI);
    return 1;
}