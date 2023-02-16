#include <stdio.h>

void recursion()
{
    static int count = 1;
    if (count > 5)
    {
        return;
    }
    printf(" count = %d\n", count);
    count = count + 1;
    recursion();
}

int main()
{
    recursion();
    return 0;
}