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

    switch(operation)
    {
        case '|':
            num |= (1<<bit);
            break;
        case '&':
            num &= ~(1<<bit);
            break;
        case '^':
            num ^= (1<<bit);
            break;
        default:
            printf("NaN");
    }
    printf("The result is: %d \n",num);
}