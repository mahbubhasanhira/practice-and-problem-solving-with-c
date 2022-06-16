#include <stdio.h>
int main()
{
    // page 86
    int ft_marks, st_marks, final_marks, total_marks;
    ft_marks = 80;
    st_marks = 74;
    final_marks = 97;
    // total_marks = ft_marks / 4.00 + st_marks / 4.00 + final_marks / 2.00; // output = 87
    total_marks = ft_marks / 4 + st_marks / 4 + final_marks / 2; // output = 86
    // printf("total marks = %d", total_marks);

    // page 88
    int my_arr[10] = {5, 4, 6, 7, 8};
    printf("%d\n", my_arr[2]);
    return 0;
}