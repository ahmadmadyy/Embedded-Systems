#include <stdio.h>
#include <math.h>

int digit_cnt(int x);

int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d",&x);
    int sum = 0;
    int y=x;
    int power = digit_cnt(x);
    while(x)
    {
        sum += pow(x%10,power);
        x /= 10;
    }
    sum==y ? printf("Armstrong") : printf("Not Armstrong");
}

    int digit_cnt(int x)
    {
        int count = 0;
        if(x==0)
        {
            return 1;
        }
        if(x<0)
        {
            x = x * -1;
        }
        else
        {
            while(x)
            {
                count++;
                x=x/10;
            }
        }
        return count;
    }
