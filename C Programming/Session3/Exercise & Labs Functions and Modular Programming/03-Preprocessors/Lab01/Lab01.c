/*
 ============================================================================
 Name        : Lab01.c
 Author      : AMIT Learning
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Implement a program that takes 2 input numbers i.e. x and y; and
 do the following:
 + Check value of given x is less than a predefined value
 + Check value of given y is less than a predefined value
 + Print the result of x + y
 + Print the result of x * y
 + Print the result of (x + y) * x
 + Use Macros to hold the predefined values of x and y
 + Use Macro to hold addition formula
 + Use Macro to hold multiplication formula
 ============================================================================
*/

#define PRE_X	10
#define PRE_Y  	20
#define add(x,y) x+y
#define multiply(x,y) x*y

#include <stdio.h>

int main(void)
{
    int x,y;
    while (1)
    {
        printf("Please enter a number greater than %d.\n",PRE_X);
        scanf("%d", &x);
        while (x < PRE_X)
        {
            printf("Number invalid.\nPlease enter a number greater than %d.\n",PRE_X);
            scanf("%d", &x);
        }
        printf("Please enter another number greater than %d.\n",PRE_Y);
        scanf("%d", &y);
        while (y < PRE_Y)
        {
            printf("Number invalid.\nPlease enter a number greater than %d.\n",PRE_Y);
            scanf("%d", &y);
        }

        printf("The sum of the numbers entered is %d.\n", add(x,y));
        printf("The result of multiplying the numbers entered is %d.\n", multiply(x,y));
        printf("The result of adding the numbers entered and the multiplying by the first number is %d.\n\n", (add(x,y))*x);

    }


	return 0;
}
