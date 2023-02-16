#include <stdio.h>

int sumRecursion(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumRecursion(n - 1);
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%d", sumRecursion(n));
    return 0;
}