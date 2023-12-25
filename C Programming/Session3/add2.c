#include <stdio.h>

int add(int *x,int *y);

int main()
{
    int x = 5;
    int y = 7;
    int z = add(&x,&y);
    printf("Value: %d",z);
}

int add(int *x,int *y)
{
    return *x + *y;
}