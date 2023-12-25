#include <stdio.h>

int main()
{
    int x;
    printf("Enter any number: ");
    scanf(" %d",&x);
    int y = x/2;
    y*=2;
    y==x ? printf("The number is odd = 0 \nThe number is even = 1") : 
                        printf("The number is odd = 1 \nThe number is even = 0");
}