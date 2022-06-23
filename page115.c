#include <stdio.h>

int b_search(int ara[], int low_index, int high_index, int num)
{
    int mid_index;
    while (low_index <= high_index)
    {
        mid_index = (low_index + high_index) / 2;
        if (num == ara[mid_index])
        {
            break;
        }
        if (num < ara[mid_index])
        {
            high_index = mid_index - 1;
        }
        else
        {
            low_index = mid_index + 1;
        }
    }
    if (low_index > high_index)
    {
        printf("%d is not in the array");
    }
    else
    {
        printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid_index], mid_index);
    }
}

int main()
{
    int arra[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low = 0;
    int high = 15;
    int key = 97;
    b_search(arra, low, high, key);
    return 1;
}
