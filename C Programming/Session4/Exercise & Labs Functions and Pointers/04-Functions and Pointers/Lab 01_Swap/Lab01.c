/*
========================================================
Name: Lab 01
Author: AMIT Learning
Target: Swap
========================================================
Description:
+ Receive 2 numbers from user.
+ Pass the 2 numbers to a function to be swapped.
+ Print the 2 numbers after swapping.
+ The function takes 2 pointers and returns void.
========================================================
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *pvar1, int *pvar2)
{
    int temp = *pvar1;
    *pvar1 = *pvar2;
    *pvar2 = temp;
}
int main()
{
    int var1=0, var2=0;
    while (1)
    {
        printf("Please enter 2 numbers to be swapped\n");
        printf("The first number: ");
        scanf("%d", &var1);
        printf("The second number: ");
        scanf("%d", &var2);

        swap(&var1, &var2);

        printf("Now after swapping...\n");
        printf("the first number: %d\n", var1);
        printf("the second number: %d\n\n", var2);
    }


    return 0;
}
