/*
 * Ex03.c
 * Session 2: Loops and decisions
 * Author: AMIT Learning
 */
// purpose: This program is part of C Course On AMIT Learning

/* *******************************************************
 * Write a C code that check whether a number is prime
 * *****************output sample**************************
 * Enter a number: 3
 * 3 is prime
 *
 * Enter a number: 4
 * 4 is divisible by 2
 * ********************************************************
 */
/* Notes: please refer to >> https://en.wikipedia.org/wiki/Prime_number
 * if you don't remember what a prime number is.
 */
#include<stdio.h>


int main(void){
	while (1)
    {
        int input, i = 2, flag = 0;

        printf("Please enter a positive integer number to check if it is a prime number.\n");

        scanf("%d", &input);

        if (input >= 0)
        {
            for (i; i < input; i++)
            {
                if (input % i == 0)
                    {
                        printf("%d is divisible by %d.\n\n", input, i);
                        flag = 1;
                        break;
                    }
            }
            if (flag != 1)
                printf("%d is prime.\n\n", input);
        }
        else
            printf("Invalid number.\n\n");

    }


return 0;
}
