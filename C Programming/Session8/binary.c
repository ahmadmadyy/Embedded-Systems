#include <stdio.h>

int main()
{
    while(1)
    {
        int signed n;
        printf("Enter a number: ");
        scanf("%d",&n);

        int ctr = 0;
        while(n)
        {
            if(n%2==1)
            {
                ctr++;
                n/=2;
            }
            else
            {
                n/=2;
            }
        }
        printf("%d \n",ctr);
    }
}