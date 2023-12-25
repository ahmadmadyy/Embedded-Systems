/*
============================================================
Name: Lab 04
Author: AMIT Learning
Target: Modular Programming
============================================================
Description:
+ Create "Calculator.c" and "Calculator.h" files.
+ Create a function for every mathematical operation in
  "Calculator.c" file.
+ Put all the prototypes of the functions in "Calculator.h".
+ Take 2 inputs from the user to be calculated.
+ Create macros to calculate the max and min of the 2 inputs
  from the user.
+ Define a macro to run the calculator when defined and stop
  it when not defined.
============================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "Calculator.h"


int main()
{
    int input_1;
    double input_2;
    char operation;
    while (1)
    {
        printf("Please enter 2 numbers to calculate.\n");
        printf("The first number: ");
        scanf("%d", &input_1);
        printf("The second number: ");
        scanf("%lf", &input_2);
        printf("The operation: ");
        scanf("%s", &operation);
        printf("%d %c %.0lf = ", input_1, operation, input_2);

        switch (operation)
        {
        case '+':
            {
                printf("%d\n", add(input_1, input_2));
                break;
            }
        case '-':
            {
                printf("%d\n", subtract(input_1, input_2));
                break;
            }
        case '*':
            {
                printf("%d\n", multiply(input_1, input_2));
                break;
            }
        case '/':
            {
                printf("%.1lf\n", divide(input_1, input_2));
                break;
            }
        case '%':
            {
                printf("%.0lf\n", remainder(input_1, input_2));
                break;
            }
	case 'm':
            {
                printf("The max number is %.0lf\n", Max(input_1, input_2));
  	        printf("The min number is %.0lf\n\n", Min(input_1, input_2));
                break;
            }
        default:
            {
                printf("\nPlease enter a basic arithmetic operation.\n");
                printf("+ - * / %\n");
                break;
            }

    }//switch


    }//while

    return 0;
}//main
