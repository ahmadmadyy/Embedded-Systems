#ifndef CALENDAR_H_INCLUDED
#define CALENDAR_H_INCLUDED

typedef struct calendar
{
    unsigned char day;
    unsigned char month;
    int year;
};

void SetCalendar(unsigned char day, unsigned char month, int year);
void GetDay(void);
void GetMonth(void);
void GetYear(void);


#endif // CALENDAR_H_INCLUDED
