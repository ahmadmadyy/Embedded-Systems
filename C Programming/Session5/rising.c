#include <stdio.h>

int count=0;
//int prev = 0; // or use static so it doesn't change
// static is better for the prev variable to be seen only 
// in the fcn not edited in main
int flag = 0;

int countRising(int x)
{
    static int prev = 0;
    if(flag==0)
    {
        flag = 1;
        return 0;
    }
    if(flag==1 && prev==0 && x==1)
    {
        count++;
    }
    else
    {

    }
    prev = x;
    return count;
}

int main()
{
    for(int i=0;i<13;i++)
    {
        int m;
        printf("Enter nums: ");
        scanf("%d",&m);
        countRising(m);
    }
    printf("%d",count);
}