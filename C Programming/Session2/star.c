#include <stdio.h>

// check start and how to end step by step

int main()
{
    int n;
    printf("Enter a num: ");
    scanf(" %d",&n);
    int i=0;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}