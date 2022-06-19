#include <stdio.h>

int find_max(int arr[], int arr_length)
{
    int max = arr[0];
    int i;
    for (i = 0; i < arr_length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int arra[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
    int arra_length = 11;
    int max = find_max(arra, arra_length);
    printf("%d", max);
    return 1;
}