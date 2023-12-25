#include <stdio.h>

void seperate(int x);

int main()
{
    signed int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    seperate(x);
}

void seperate(int x)
{
    //int y;
    if(x==0)
    {
        printf("x is zero");
    }
    if(x<0)
    {
        x = x * -1;
    }
    while(x)
    {
       //y=x%10;
        printf("%d \n",x%10);
        x=x/10;
    }
}