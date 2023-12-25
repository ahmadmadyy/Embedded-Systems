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
    int i,j,mindex;
    for(i=0;i<n-1;i++)
    {
        mindex=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mindex])
            {
                mindex=j;
            }
        swap(&arr[i],&arr[mindex]);
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