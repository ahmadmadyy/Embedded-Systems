#include <stdio.h>

#define MAX(a,b) (a>b?a:b)
//#define CLEAR_BIT(RES,NUM_BIT) (RES = RES & (~(1<<NUM_BIT)))

int main()
{
    int result = MAX(7,3);
    printf("%d",result);

    //printf("%d", CLEAR_BIT(5,1));
}