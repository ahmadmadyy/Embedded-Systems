#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main()
{
    while (1)
    {
        int size_of_arr = 0;
        printf("Please enter the number of elements to sort.\n");
        scanf("%d", &size_of_arr);
        int arr[size_of_arr];
        int *p_arr;
        p_arr = &arr;
        int i, j, temp;
        for (i = 0; i <size_of_arr; i++)
        {
            printf("Element %d: ", i+1);
            scanf("%d", &p_arr[i]);
        }
        printf("Array before sorting is [\t");
        for (i = 0; i < size_of_arr; i++)
        {
            printf("%d\t", p_arr[i]);
        }
        printf("]\n");

        for(i = 0; i < size_of_arr; i++)
        {
            for (j = i+1; j < (size_of_arr); j++)
            {
                if (p_compare_fn(&p_arr[i], &p_arr[j])==1)
                    p_swap_fn(&p_arr[i], &p_arr[j]);
            }
        }

        printf("Array after sorting is  [\t");
        for (i = 0; i < size_of_arr; i++)
        {
            printf("%d\t", p_arr[i]);
        }
        printf("]\n\n");
    }
    return 0;
}
