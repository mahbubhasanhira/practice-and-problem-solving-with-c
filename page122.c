#include <stdio.h>

int str_length(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char country[100];
    int length;
    while (NULL != gets(country))
    {
        length = str_length(country);
        printf("The length of %s is: %d\n", country, length);
    }

    return 1;
}