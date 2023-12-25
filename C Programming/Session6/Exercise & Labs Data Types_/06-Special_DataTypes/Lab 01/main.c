/*
==================================================================================
Author: AMIT Learning
Name: Lab 01
Target: Data structures
==================================================================================
Description:
+
==================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "calendar.h"

struct calendar calendar_1;

int main()
{
    unsigned char month, day;
    int year;
    while (1)
    {
        printf("Please enter the date.\n");
        printf("Day  : ");
        scanf("%d", &day);
        printf("Month: ");
        scanf("%d", &month);
        printf("Year : ");
        scanf("%d", &year);
        SetCalendar(day, month, year);
        GetDay();
        GetMonth();
        GetYear();
    }


    return 0;
}
