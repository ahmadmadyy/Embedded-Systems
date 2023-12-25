/*
 ============================================================================
 Name        : Lab05.c
 Author      : AMIT Learning
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Implement a program that takes an input value from the user, and
 prints the factorial value
 * Use “while” statement
 ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	while (1)
    {
        int input;
        int factorial=1;
        int counter=0;
        printf("Please enter a number to calculate its factorial.\n");
        scanf("%d", &input);

        while (counter < input)
        {
            factorial *= counter;
        }
        printf("The factorial of %d is %d\n", input, factorial);
    }
	return 0;
}
