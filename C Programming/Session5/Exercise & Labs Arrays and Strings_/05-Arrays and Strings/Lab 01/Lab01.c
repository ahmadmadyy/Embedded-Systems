/*
==================================================================================
Author: AMIT Learning
Name: Lab 01
Target: Strings
==================================================================================
Description:
+ Create a string that stores "Task one is running..."
+ Create a function: void task (void *pv);
+ The function should print the printed string.
==================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "task.h"

int main()
{
    char *str = "Task one is running...\n";
    task((void *)str);
    return 0;
}
