#include <stdio.h>
#include "mathlib.h"
#include "errorlog.h"

int main()
{
    unsigned char param_1;
    unsigned char param_2;
    printf("Enter first number: ");
    scanf(" %u",&param_1);
    printf("Enter second number: ");
    scanf(" %u",&param_2);

    int result = (int) Math_Add(param_1,param_2);
    int real_res = (int) param_1 + (int) param_2;
    printf("Real Result = %d \n",real_res);
    if(real_res!=result && real_res>255)
    {
        ErrLog_Log();
    }
    else
    {
        printf("The result is:  %u \n",result);
    }
}