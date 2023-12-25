#include <stdio.h>

int main()
{
    while(1)
    {
    int x;
    int y;
    char z;
    int result;

    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter operator: ");
    scanf(" %c",&z);
    printf("Enter second number: ");
    scanf("%d",&y);

    switch (z)
    {
    case '+':
        result = x+y;
        break;
    case '-':
        result = x-y;
        break;
    case '*':
        result = x*y;
        break;
    case '/':
        result = x/y;
        break;
    default:
        break;
    }

    printf("The result of %d %c %d is = %d",x,z,y,result);
    printf("\n");
    }
}