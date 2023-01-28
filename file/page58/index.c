#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("in.txt", "r");
    if (fp == NULL)
    {
        perror("Can't open File");
        return EXIT_FAILURE;
    }

    int ch;
    ch = fgetc(fp);
    printf("%c\n", (char)ch);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    fseek(fp, 0, SEEK_CUR);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    return 0;
}