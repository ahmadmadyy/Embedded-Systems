#include <stdio.h>

static int var = 5; // not placed in stack, but another section in memory

/*
    
*/

int main()
{
    int x;
    printf("Enter a number: ");
    scanf(" %d",&x);
    int result = 1;
    for(int i=x;i>1;i--)
    {
        result*=i;
    }
    printf("Factorial: %d",result);
    // printf("\n");
    // int m;
    // printf("m = %d",m);
}