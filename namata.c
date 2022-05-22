#include <stdio.h>

int main()
{
    int number = 1;
    printf("Type a number: ");
    scanf("%d", &number);
    // for loop
    /* for (int i = 1; i <= 10; i++)
    {
        int multiply = i * number;
        printf("%d x %d = %d\n", i, number, multiply);
    } */

    // while loop
    /*
    int i = 1;
    while (i <= 10)
    {
        int multiply = i * number;
        printf("%d x %d = %d\n", i, number, multiply);
        i++;
    } */

    /* int i = 1;
     do
     {
         int multiply = i * number;
         printf("%d x %d = %d\n", i, number, multiply);
         i++;
     } while (i <= 10); */

    // with add
    int add = 0;
    for (int i = 1; i <= 10; i++)
    {
        add = add + number;
        printf("%d x %d = %d\n", i, number, add);
    }

    return 0;
}
