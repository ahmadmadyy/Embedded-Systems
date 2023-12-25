#include "Calculator.h"

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

double divide(int x, int y)
{
    if (y == 0)
    {
        printf("\nCannot divide by ZERO.\n\n");
        return 0;
    }
    else return x / y;
}

double remainder(int x, int y)
{
    return x % y;
}

