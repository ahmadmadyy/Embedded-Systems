#ifndef CALENDAR_H_INCLUDED
#define CALENDAR_H_INCLUDED

typedef unsigned char unint_8;
typedef int int_32;

typedef union calendar
{
    unint_8 day;
    unint_8 month;
    int_32 year;
};

void SetDay(unint_8 day);
void SetMonth(unint_8 month);
void SetYear(int_32 year);
void GetDay(void);
void GetMonth(void);
void GetYear(void);

#endif // CALENDAR_H_INCLUDED
