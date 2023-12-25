#include "calendar.h"
extern union calendar calendar_1;

void SetDay(unint_8 day)
{
    calendar_1.day = day;
}

void SetMonth(unint_8 month)
{
    calendar_1.month = month;
}

void SetYear(int_32 year)
{
    calendar_1.year = year;
}

void GetDay(void)
{
    printf("Day is %d.\n", calendar_1.day);
}

void GetMonth(void)
{
    printf("Month is %d.\n", calendar_1.month);
}

void GetYear(void)
{
    printf("Year is %d.\n", calendar_1.year);
}


