#include <stdio.h>

int edit(int *x);

int main()
{
    int x;
    printf("Enter number: ");
    scanf(" %d",&x);
    printf("before edit x = %d \n",x);
    printf("after edit x = %d \n",edit(&x));
}

int edit(int *x)
{
    return *x+1;
}