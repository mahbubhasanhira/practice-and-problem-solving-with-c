#include <stdio.h>

void recursion()
{
    printf("%s\n", "Hurrey, I am learning recursion.");
    recursion();
}

int main()
{ 
    recursion();
    return 0;
}