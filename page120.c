#include <stdio.h>

int main()
{
    // programme 9.4 lowercase to uppercase
    /*
        char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};

        printf("%s\n", country);

        int i, length;
        length = 10;

        for (i = 0; i < length; i++)
        {
            if (country[i] >= 97 && country[i] <= 122)
            {
                country[i] = 'A' + (country[i] - 'a');
            }
        }

        printf("%s\n", country);
        */

    // uppercase to lowercase

    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};

    printf("%s\n", country);

    int i, length;
    length = 10;

    for (i = 0; i < length; i++)
    {
        if (country[i] >= 65 && country[i] <= 90)
        {
            country[i] = 'a' + (country[i] - 'A');
        }
    }

    printf("%s\n", country);

    return 1;
}