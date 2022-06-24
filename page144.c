#include <stdio.h>

int main()
{
    int namta[10][10];
    int row, col, odd = 0, even = 0, total_sum_of_namta = 0;
    for (row = 0; row < 10; row++)
    {
        for (col = 0; col < 10; col++)
        {
            namta[row][col] = (row + 1) * (col + 1);
        }
    }

    for (row = 0; row < 10; row++)
    {
        for (col = 0; col < 10; col++)
        {
            if (namta[row][col] % 2 == 0)
            {
                odd++;
            }
            else
            {
                even++;
            }
            total_sum_of_namta = total_sum_of_namta + namta[row][col];
            printf("%d x %d = %d\n", (row + 1), (col + 1), namta[row][col]);
        }
        printf("\n");
    }
    printf("Total odd Number: %d\n", odd);
    printf("Total even Number: %d\n", even);
    printf("Total sum of namta: %d", total_sum_of_namta);
    return 0;
}