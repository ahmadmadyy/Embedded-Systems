/*
 ============================================================================
 Name        : Lab04.c
 Author      : AMIT Learning
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Implement a program that takes an input value from the user, and
 prints the summation result of the odd the numbers, from 0 to the
 given input value
 * Use “for” statement
 ============================================================================
*/

#include <stdio.h>

int main(void)
{
    while (1)
    {
        int sum_even = 0;
        int input;
        printf("Please enter a number to add all even numbers till it is reached.\n");
        scanf("%d", &input);
        int i;

        for (i = 0; i <= input; i++)
        {
            if (i%2 == 0)
                sum_even += i;
        }

        printf("The sum of all even numbers to %d is %d\n", input, sum_even);

    }

	return 0;
}
