#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[] = "my_file2.txt";
    fp = fopen(fileName, "w");
    fprintf(fp, "This is a file created from page46!\n");
    fprintf(fp, "I'm also happy!\n");
    fclose(fp);

    fp = fopen(fileName, "a");
    fprintf(fp, "This line created after close the file and then again open the file");
    fclose(fp);

    return 0;
}