/*
======================================================================
Name: Lab 02
Author: AMIT Learning
Target: Arrays
======================================================================
Description:
+ Declare an array of integers and an array of characters.
+ Create functions to print the value and address of every element of
  the arrays.
+ One of the functions should take an array and the size of the array.
+ One of the functions should take a pointer to the array and the size
  of the array, and use pointer arithmetic to iterate.
======================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "array_function.h"

int main()
{
    int int_array[5] = {1,2,3,4,5};
    char char_array[5] = "AMIT";
    char *char_array_ptr = char_array;
    print_array_loop_int(int_array, 5);
    print_array_PointerArithmetic_char(char_array_ptr, 4);
    return 0;
}
