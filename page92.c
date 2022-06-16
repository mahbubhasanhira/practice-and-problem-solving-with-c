#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int arr2[10];
    int i, j;
    for (i = 0, j = 9; i < 10; i++, j--)
    {
        arr2[j] = arr[i];
    }

    // for (i = 0; i < 10; i++)
    // {
    //     arr[i] = arr2[i];
    // }

    for (int i = 0; i < 10; i++)
    {
        printf("%d th element is: %d\n", i + 1, arr2[i]);
        // printf("%d th element is: %d\n", i + 1, arr[i]);
    }
    return 0;
}