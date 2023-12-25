/*
==================================================================================
Author: AMIT Learning
Name: Lab 02
Target: Unions and type definition
==================================================================================
Description:
+
==================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "calendar.h"

union calendar calendar_1;

int main()
{
    unint_8 month, day;
    int_32 year;
    while (1)
    {
        printf("Please enter the date.\n");
        printf("Day  : ");
        scanf("%d", &day);
        printf("Month: ");
        scanf("%d", &month);
        printf("Year : ");
        scanf("%d", &year);
        SetDay(day);
        GetDay();
        SetMonth(month);
        GetMonth();
        SetYear(year);
        GetYear();
    }


    return 0;
}
