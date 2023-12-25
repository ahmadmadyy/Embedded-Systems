#include <stdio.h>

void checkEven(int x);

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    checkEven(x);
}

void checkEven(int x)
{
    x%2==0 ? printf("number is Even") : printf("number is Odd");
}