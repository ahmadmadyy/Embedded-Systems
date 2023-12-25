/*
==================================================================================
Author: AMIT Learning
Name: Lab 03
Topic: Enumerations
==================================================================================
Description:
+
==================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "calendar.h"

uint_8 month, day;

int main()
{
    enum WeekDays {saturday=1, sunday, monday, tuesday, wednesday, thursday, friday};
    while (1)
    {
        printf("Please enter the date.\n");
        printf("Week day  : ");
        scanf("%d", &day);
        if ((day<saturday)||(day>friday))
        {
            printf("Please enter a number between 1 and 7.\n\n");
        }
        else
        {
            printf("Month day: ");
            scanf("%d", &month);
            if ((month<1)||(month>31))
            {
                printf("Please enter a number between 1 and 31.\n\n");
            }
            else
            {
                GetDay();
                GetMonth();
            }
        }


    }


    return 0;
}
