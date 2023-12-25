/*
 * Ex01.c
 * Session 2: Loops and decisions
 * Author: AMIT Learning
 */
// purpose: This program is part of C Course On AMIT Learning

/* *******************************************************
 * Write a C code that asks the user to enter a three digits
 * number then prints the number with its digits reversed
 * *****************output sample**************************
 * Enter a two digit number: 287
 * The reversal is: 782
 * ********************************************************
 */

#include <stdio.h>

int main (void){
    while (1)
    {
        int input = 0, hundreds = 0, tens = 0, units = 0;

        printf("Please enter a 3 digit number to be reversed.\n");
        scanf("%d", &input);

        if (input > 99 && input < 1000)
        {
            units = input / 100;
            tens = (input / 10) % 10;
            hundreds = input % 10;

            printf("%d%d%d\n",hundreds, tens, units);
        }
        else printf("Please enter a valid number.\n");

    }


return 0;
}
