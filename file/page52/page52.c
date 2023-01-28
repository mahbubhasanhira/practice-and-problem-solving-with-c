#include <stdio.h>

int main()
{
    FILE *fp_in, *fp_out;
    char *input_bangla_file = "bangla.txt";
    // char *input_math_file = "math.txt";
    // char *input_english_file = "english.txt";
    // char *output_bangla__file = "output_bangla_.txt";
    // char *output_math__file = "output_math_.txt";
    // char *output_english__file = "output_english_.txt";

    char line[256], ch;

    fp_in = fopen(input_bangla_file, "r");
    int total;
    do
    {
        int roll, result;
        ch = fgetc(line, 80, fp_in);
        total = total + result;
        printf("%c", ch);
        // printf("%d", total);

    } while (ch != EOF);
    return 0;
}