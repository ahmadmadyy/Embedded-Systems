/*
=================================================================
Name: Lab 01
Author: AMIT Learning
Target: Pointers to functions
=================================================================
Description:
+ Create "Flag.c" and "Flag.h" files.
+ Create 3 functions to set, clear and print an 8-bit variable
  (Flag) using bitwise operations in "Flag.c".
+ Put all the prototypes of the functions in "Flag.h".
+ Use pointers to call the functions in "main.c".
+ Implement "main.c" to initialize the flag with 0.
+ Set the flag and then clear it.
+ Create "machine.c" and "machine.h" files.
+ Declare a variable (step = 0.3) in "machine.c".
+ Create a function to print (step) and call it in "main.c" using
  a pointer.
=================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "Flag.h"
#include "machine.h"

unsigned char flag = 0;
unsigned char (*set_ptr)(unsigned char);
unsigned char (*clear_ptr)(unsigned char);
void (*print_flag_ptr)(unsigned char);
void (*print_step_ptr)(float);

extern float step;

int main()
{
    set_ptr = set;
    clear_ptr = clear;
    print_flag_ptr = print_flag;
    print_step_ptr = print_step;

    printf("Hello world!\n");
    printf("Before setting...\n");
    print_flag_ptr(flag);
    printf("After setting...\n");
    flag = set_ptr(flag);
    print_flag_ptr(flag);
    printf("After clearing...\n");
    flag = clear_ptr(flag);
    print_flag_ptr(flag);
    print_step_ptr(step);

    return 0;
}
