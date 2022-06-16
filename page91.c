#include <stdio.h>
int main()
{
    // programme 6.7
    // int arr[5] = {6, 7, 8, 9, 10};
    // printf("%d\n", arr[-1]);
    // printf("%d\n", arr[5]);
    // printf("%d\n", arr[100]);

    // programme 6.8
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for (int i = 9; i >= 0; i--)
    {
        printf("%d th element is: %d\n", i + 1, arr[i]);
    }

    return 0;
}