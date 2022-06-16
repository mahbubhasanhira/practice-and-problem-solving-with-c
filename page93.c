#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;
    for (i = 0, j = 9; i < 10; i++, j--)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        if (i == 4)
        {
            break;
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d th element is: %d\n", i + 1, arr[i]);
    }

    return 0;
}