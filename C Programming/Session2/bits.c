#include <stdio.h>

int main()
{
    printf("Enter Number:");
    int num;
    scanf("%d",&num);

    printf("Enter Operation: | or & or ^ ");
    char operation;
    scanf(" %c",&operation); // space for char

    printf("Enter bit of num between 1 and 7:");
    int bit;
    scanf("%d",&bit);

    if(operation == '|')
    {
        num = num | (1<<bit);
    }
    else if(operation == '&')
    {
        num = num & ~(1<<bit);
    }
    else
    {
        num = num ^ (1<<bit);
    }
    printf("The result is: %d \n",num);
}