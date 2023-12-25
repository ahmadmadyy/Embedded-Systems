#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void reverse(int arr[], int n)
{
    int m = n/2;
    int u = (n/2);
    if(n%2==0)
    {
        for(int i=0;i<m;i++)
        {
            swap(&arr[i],&arr[n-1-i]);
        }
    }
    else
    {
        for(int i=0;i<=m;i++)
        {
            if(i == u)
            {
                continue;
            }
            else
            {
                swap(&arr[i],&arr[n-1-i]);
            }
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before Reversing: \n");
    printarray(arr,n);
    printf("\n");

    printf("Array after Reversing: \n");
    reverse(arr,n);
    printarray(arr,n);
}

