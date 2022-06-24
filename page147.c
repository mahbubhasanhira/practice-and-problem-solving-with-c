#include <stdio.h>

int main()
{
    // first programme sum of row
    /*
    int ara[5][5] = {
        {6, 4, 7, 8, 9},
        {3, 7, 1, 9, 9},
        {8, 6, 4, 2, 7},
        {2, 4, 2, 5, 9},
        {4, 1, 6, 7, 3},
    };
    int ara2[5][5];
    int row, col;
    for (row = 0; row < 5; row++)
    {
        int sum_of_row = 0;
        for (col = 0; col < 5; col++)
        {
            sum_of_row = sum_of_row + ara[row][col];
        }
        printf("Sum of row %d: %d\n", row + 1, sum_of_row);
    }
    */

    // second programme sum of column
    int ara[5][5] = {
        {6, 4, 7, 8, 9},
        {3, 7, 1, 9, 9},
        {8, 6, 4, 2, 7},
        {2, 4, 2, 5, 9},
        {4, 1, 6, 7, 3},
    };
    int row, col;
    for (row = 0; row < 5; row++)
    {
        int sum_of_row = 0, sum_of_col = 0;
        for (col = 0; col < 5; col++)
        {
            // convert row to column then sum
            sum_of_col = sum_of_col + ara[col][row];
        }
        printf("Sum of col %d: %d\n", row + 1, sum_of_col);
    }

    return 0;
}