#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[] = "my_file.c";
    fp = fopen(fileName, "w");
    fprintf(fp, " This is a file created by my programme! ");
    fprintf(fp, "I am also happy!");

    fclose(fp);

    return 0;
}