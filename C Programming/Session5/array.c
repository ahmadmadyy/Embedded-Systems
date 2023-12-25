#include <stdio.h>

void print(int* ptr)
{
    for(int i = 0; i < 6 ; i++)
    {
        printf("%d ",ptr[i]);
    }
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    print(arr);
    printf("\n");
    printf("%d",&arr); // same as arr, both retun the address
}