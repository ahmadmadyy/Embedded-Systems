#include <stdio.h>

void swap(int *a, int *b);
void sort(int arr[], int n);
void printarray(int arr[], int size);

int main()
{
    int arr[] = {5,7,2,9,3,10,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    printarray(arr,n);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n)
{
    int i,j;
    int swapped = 0;
    for(i=0;i<n-1;i++)
    {
        swapped = 0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                swapped=1;
            }
        }
        if(swapped=0)
        {
            break;
        }
    }
}

void printarray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}