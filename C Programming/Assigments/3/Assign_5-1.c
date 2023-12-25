#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void operationArray(int arr_1[5])
{
    int n=5;

    // sort: 
    int i,j;
    int swapped = 0;
    for(i=0;i<n-1;i++)
    {
        swapped = 0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr_1[j]>arr_1[j+1])
            {
                swap(&arr_1[j],&arr_1[j+1]);
                swapped=1;
            }
        }
        if(swapped=0)
        {
            break;
        }
    }

    printf("Elements: \n");
    for(int k=0;k<5;k++)
    {
        printf("%d \n",arr_1[k]);
    }
    printf("The maximum number in arr_1 is %d and its position in array is: %d \n",arr_1[4],4);
    printf("The minimum number in arr_1 is %d and its position in array is: %d",arr_1[0],0);
}

int main()
{
    int arr_1[5];
    printf("Enter Elements: ");
    int x;
    for(int k=0;k<5;k++)
    {
        scanf("%d",&x);
        arr_1[k] = x;
    }
    operationArray(arr_1);
}

