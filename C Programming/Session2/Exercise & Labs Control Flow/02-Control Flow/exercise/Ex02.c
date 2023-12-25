/*
 * Ex02.c
 * Session 2: Loops and decisions
 * Author: AMIT Learning
 */
// purpose: This program is part of C Course On AMIT Learning

/* *******************************************************
 * Write a C code that finds the largest and the smallest of
 * four integers entered by the user
 * *****************output sample**************************
 * Enter four integers: 21 43 10 35
 * Largest: 43
 * Smallest: 10
 * ********************************************************
 */

#include<stdio.h>


int main(void){
    while (1)
    {
        int input_1 = 0, input_2 = 0, input_3 = 0, input_4 = 0;
        int max = 0, min = 0;

        printf("Please enter 4 numbers to sort the largest and the smallest numbers in them.\n");
        scanf("%d%d%d%d", &input_1, &input_2, &input_3, &input_4);

        if (input_1 > input_2)
        {
            max = input_1;
            min = input_2;
        }
        else
        {
            max = input_2;
            min = input_1;
        }
        if (input_3 > max)
            max = input_3;
        else
        {
            if (input_3 < min)
                min = input_3;
        }
        if (input_4 > max)
            max = input_4;
        else
        {
            if (input_4 < min)
                min = input_4;
        }
        printf("The largest number is %d\n", max);
        printf("The smallest number is %d\n", min);

    }

return 0;
}
