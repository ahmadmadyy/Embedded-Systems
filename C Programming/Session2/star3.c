#include <stdio.h>

// check start and how to end step by step

// Example codes: https://www.programiz.com/c-programming/examples/pyramid-pattern

int main()
{
    int n;
    printf("Enter a num: ");
    scanf(" %d",&n);
    int i=0;
    for(i=0;i<n;i++)
    {
        for(int j=-n;j<n;j++)
        {
            if(j>=-i && j<=i)
            {
                printf("* ");
            }
            else if(j>=i || j<=n || j<-i || j>i)
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}