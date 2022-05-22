#include <stdio.h>

int main()
{
    int n, i, limit;
    printf("Type a number: ");
    scanf("%d", &limit);

    for (n = 1; n <= limit; n++)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", i, n, i * n);
        }
    }

    return 0;
}