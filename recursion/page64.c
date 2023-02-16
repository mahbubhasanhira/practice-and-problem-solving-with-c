#include <stdio.h>

int x = 1;

void myFunc(int y)
{
    y = y * 2;
    x = x + 10;
    printf("myFunc, x = %d, y = %d\n", x, y); // 20, and 10
}

int main()
{
    int y = 5;
    x = 10;
    myFunc(y);
    printf("main, x = %d, y = %d", x, y); // 20 and 5
    return 0;
}