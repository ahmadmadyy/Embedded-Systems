#include "calendar.h"
extern struct calendar calendar_1;

void SetCalendar(unsigned char day, unsigned char month, int year)
{
    calendar_1.day = day;
    calendar_1.month = month;
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


