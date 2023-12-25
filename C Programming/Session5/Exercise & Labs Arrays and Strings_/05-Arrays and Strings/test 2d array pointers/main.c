#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr_int[2][4] = {{10,11,12,13},
                         {20,21,22,23}};
    int (*arr_ptr_1)[4];
    arr_ptr_1 = &arr_int;

    int *arr_ptr_2[2];
    arr_ptr_2[0] = &arr_int[0][0];
    arr_ptr_2[1] = &arr_int[1][0];

    printf("%d", arr_ptr_2[1]+2);

    return 0;
}
