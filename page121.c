#include <stdio.h>

int str_length(char arr[])
{
    int i, length = 0;
    for (i = 0; arr[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    char country[100];
    int length;
    while (1 == scanf("%s", country))
    {
        length = str_length(country);
        printf("The length of country: %d\n", length);
    }

    return 1;
}