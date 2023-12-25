/*
 ============================================================================
 Name        : Lab06.c
 Author      : AMIT Learning
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course On AMIT Learning
 ========================================================
 Create a Function called print() and use printf inside it
 * In the main file, declare a pointer to function
 * Assign the 'Pointer to function' to print
 * call the function that takes a ptr to functino as an argument
Expected Output:
 * Printing what's inside function print
 ============================================================================
*/
#include <stdio.h>
#include <stdlib.h>

void print();
void func(void (*callback)());
void (*vpf)();
int main(int argc, char *argv[])
{
    vpf=print;
    func(vpf);
    return 0;
}

void print(){
printf("inside the callback\n");
}

void func(void (*callback)()){
    callback();
}
