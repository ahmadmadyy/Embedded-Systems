#include <stdio.h>
#include <stdlib.h>


int main()
{
    int rows,i,s,t;

    printf("please enter the rows number\n");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(s=1;s<=(rows-i);s++)
        {
            printf(" ");
        }
        for(t=1;t<=((2*i)-1);t++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
