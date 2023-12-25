/*
==================================================================================
Author: AMIT Learning
Name: Lab 03
Target: 2D-arrays
==================================================================================
Description:
+ Create 2 2D-arrays.
+ Take from the user the values of all the elements of the 2 arrays.
+ Print the values of the elements.
+ Print the sum of the 2 arrays (add each element of the first array with the
                                 corresponding element in the second array).
==================================================================================
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY_SIZE 2

int main()
{
    int arr_2D [MAX_ARRAY_SIZE][MAX_ARRAY_SIZE][MAX_ARRAY_SIZE];
    int i = 0, j = 0, arr_no = 0;
    for (arr_no; arr_no < 2; arr_no++)
    {
        printf("Array %d\n", arr_no +1);
        for(i; i < MAX_ARRAY_SIZE; i++)
        {
            for (j; j < MAX_ARRAY_SIZE; j++)
            {
                printf("Element [%d] [%d]\t", i, j);
                scanf("%d", &arr_2D[arr_no][i][j]);
            }
            j = 0;
        }
        i=0;
        j=0;
    }
        i=0;
        j=0;
        arr_no=0;

        for (arr_no; arr_no < 2; arr_no++)
        {
            printf("\nArray %d\n", arr_no +1);
            for(i; i < MAX_ARRAY_SIZE; i++)
            {
                for (j; j < MAX_ARRAY_SIZE; j++)
                {
                    printf("Element [%d] [%d] = %d\n", i, j, arr_2D[arr_no][i][j]);
                }
                j = 0;
            }
        i=0;
        j=0;
        }
        i=0;
        j=0;
        arr_no=0;


            printf("\nSum of the 2 arrays\n", arr_no +1);
            for(i; i < MAX_ARRAY_SIZE; i++)
            {
                for (j; j < MAX_ARRAY_SIZE; j++)
                {
                    printf("Element [%d] [%d] = %d\n", i, j, arr_2D[arr_no][i][j]+arr_2D[arr_no+1][i][j]);
                }
                j = 0;
            }

    return 0;
}
