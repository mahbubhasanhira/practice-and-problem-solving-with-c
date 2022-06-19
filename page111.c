#include <stdio.h>

void test_function(int arr[])
{
    arr[0] = 100;
    return;
}

double calculate_circle(int width, int height)
{
    return (width * height * 0.5);
}

int main()
{
    // programme 7.9
    int arra[] = {1, 2, 2, 3, 4, 5, 6, 7};
    printf("%d\n", arra[0]);
    test_function(arra);
    printf("%d\n", arra[0]);

    // task the
    double result = calculate_circle(6, 10);
    printf("%0.2lf", result);
    return 1;
}