#include <stdio.h>

int main()
{
    double time, last_speed;
    printf("Enter time: ");
    scanf("%lf", &time);
    printf("Enter last speed: ");
    scanf("%lf", &last_speed);
    printf("the result %0.2lf \n", 2 * time * last_speed);
    return 1;
}