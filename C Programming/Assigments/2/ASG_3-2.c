#include <stdio.h>

int Fibonacci(int);

int main()
{
    int n;
    printf("Enter number: ");
    scanf(" %d",&n);
    printf("Fibonacci Series of %d:   ",n);
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",Fibonacci(i));
    }
}

int Fibonacci(int x)
{
    if(x==0 || x==1)
    {
        return x;
    }
    else 
    {
        return Fibonacci(x-1) + Fibonacci(x-2);
    }
}
