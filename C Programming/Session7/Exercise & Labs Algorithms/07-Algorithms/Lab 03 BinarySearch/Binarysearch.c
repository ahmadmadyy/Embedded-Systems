/*
==================================================================================
Author: AMIT Learning
Name: Lab 03
Topic: Binary search
==================================================================================
Description:
* Search in an Array of Integers for a specific number Key.
* Print the index and number of iteration taken if the element is found
* Otherwise , Print not found
==================================================================================
*/

#define MAX_ARRAY_SIZE 1001

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rand_array[MAX_ARRAY_SIZE];

    int i,key;

    for(i=0; i < MAX_ARRAY_SIZE; i++)
    {
        rand_array[i] = i;
    }

    while (1)
    {
        printf("Please enter a number to find.\n");
        scanf("%d", &key);

        //Binary search
         int high = MAX_ARRAY_SIZE, low = 0, medium;
        for (i = 0; i < MAX_ARRAY_SIZE; i++)
        {
            medium = (high + low)/2;
            if (key == rand_array[medium])
            {
                printf("Key found!!\n");
                printf("Key's index is %d\n", medium);
                break;
            }
            else
                {
                    if (key > rand_array[medium]) low = medium;
                    if (key < rand_array[medium]) high = medium;
                }
        }
        if (i == MAX_ARRAY_SIZE) printf("Key is not found.\n\n");
        printf("Number of iterations is %d.\n\n", i+1);
    }

    return 0;
}
