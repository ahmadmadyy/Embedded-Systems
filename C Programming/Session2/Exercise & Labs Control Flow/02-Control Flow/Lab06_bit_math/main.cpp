/*
 ============================================================================
 Name        : Lab01.c
 Author      : AMIT Learning
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 * Create a header file named "bitmath.h" and include
   it in the main file
 * use macro as a function to do the following:
 * SET_BIT
 * CLEAR_BIT
 * TOGGLE_BIT
 * GET_BIT
 ============================================================================
*/

#include "bit_math.h"
#include <stdio.h>


int main()
{
    unsigned char variable=0;

    printf("variable=%d\n",SET_BIT(variable,2));

    return 0;
}
