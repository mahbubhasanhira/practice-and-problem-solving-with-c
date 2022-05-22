#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter limit: ");
    scanf("%d", &n);
    // with formula
    // sum = (n * (n + 1)) / 2;
    // printf("The total of 1 to %d = %d", n, sum);

    // with loop
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The total of 1 to %d = %d", n, sum);

    return 1;
}