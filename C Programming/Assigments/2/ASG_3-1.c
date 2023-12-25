#include <stdio.h>

void swap(int x, int y)
{
    printf("Value before sawp: x = %d , y = %d \n",x,y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("Value after sawp: x = %d , y = %d \n",x,y);
}

int main()
{
    int x;
    printf("Enter first number: ");
    scanf(" %d",&x);
    int y;
    printf("Enter second number: ");
    scanf(" %d",&y);
    swap(x,y);
}