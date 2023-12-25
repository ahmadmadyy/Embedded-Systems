/*
==================================================================================
Author: AMIT Learning
Name: Lab 02
Target: Linear Search
==================================================================================
Description:
* Use Linear Search to find a specific element in an Array of Integers
* Print the number of Iterations and the index if the element is found
* Otherwise, print not found!
==================================================================================
*/

#define MAX_ARRAY_SIZE 1001

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rand_array[MAX_ARRAY_SIZE];

    int i = 0, key;

    for(i; i < MAX_ARRAY_SIZE; i++)
    {
        rand_array[i] = i;
    }

    while (1)
    {
        printf("Please enter a number to find.\n");
        scanf("%d", &key);

        //Linear search
        for (i=0; i < MAX_ARRAY_SIZE; i++)
        {
            if (key == rand_array[i])
            {
                printf("Key found!!\n");
                printf("Key's index is %d\n", i);
                break;
            }
        }
        if (i == MAX_ARRAY_SIZE) printf("Key is not found.\n\n");
        printf("Number of iterations is %d.\n\n", i+1);
    }

    return 0;
}
