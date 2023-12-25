#include "machine.h"
unsigned char set(unsigned char flag)
{
    return flag |= (1<<0);
}

unsigned char clear(unsigned char flag)
{
    return flag &= ~(1<<0);
}

void print_flag(unsigned char flag)
{
    printf("Flag = %d\n", flag);
}
