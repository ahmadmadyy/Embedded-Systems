#include <stdio.h>

void swap(int *x,int *y)
{
    int temp = *y;
    *y = *x;
    *x = temp;
}

void swap2(int *x,int *y)
{
    printf("Values before sawpping: x = %d , y = %d \n",x,y);
    int *temp = y;
    y = x;
    x = temp;
    printf("Values after sawpping: x = %d , y = %d \n",x,y);
}

int main()
{
    printf("Enter first number:");
    int x;
    scanf("%d",&x);

    printf("Enter second number:");
    int y;
    scanf("%d",&y);

    //printf("Values before sawpping: x = %d , y = %d \n",x,y);
    swap(&x,&y);
    swap2(&x,&y);
    //printf("Values after sawpping: x = %d , y = %d \n",x,y);

}