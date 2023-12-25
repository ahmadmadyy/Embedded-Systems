#include <stdio.h>
#include <stdlib.h>

int maxOfFour(int x, int y, int w, int z);

int main() //entry point
{
    int n1,n2,n3,n4,max;

    printf("please enter the four values\n");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

    max = maxOfFour(n1,n2,n3,n4);
    printf("the maximum number is: %d",max);
    return 0;
}


int maxOfFour(int x, int y, int w, int z)
{
    int m = x;

    if(y>m)
    {
        m=y;
    }
    if(w>m)
    {
        m=w;
    }
    if(z>m)
    {
        m=z;
    }
    return m;
}
