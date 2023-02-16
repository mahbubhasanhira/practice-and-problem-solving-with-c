#include <stdio.h>

void recursion(int count)
{
    if (count > 5)
    {
        return;
    }
    printf(" count : %d\n", count);
    recursion(count + 1);
    printf(" count = %d\n", count);
}

int main()
{
    recursion(1);
    return 0;
}