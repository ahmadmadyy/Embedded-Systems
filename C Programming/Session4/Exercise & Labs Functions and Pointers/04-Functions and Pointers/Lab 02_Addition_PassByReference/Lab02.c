/*
========================================================
Name: Lab 02
Author: AMIT Learning
Target: Add
========================================================
Description:
+ Receive 2 numbers from user.
+ Pass the 2 numbers to a function to be added.
+ The result should be stored in the first variable.
+ Print the first number after adding.
+ The function takes 2 pointers and returns void.
========================================================
*/

#include <stdio.h>
#include <stdlib.h>

void add(int *pvar1, int *pvar2)
{
    *pvar1 += *pvar2;
}


int main()
{
    int var1, var2;
    while (1)
    {
        printf("Please enter 2 numbers to be added\n");
        printf("The first number: ");
        scanf("%d", &var1);
        printf("The second number: ");
        scanf("%d", &var2);

        add(&var1, &var2);

        printf("Now after adding...\n");
        printf("the first number: %d\n\n", var1);
    }

    return 0;
}
