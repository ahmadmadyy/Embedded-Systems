#include <stdio.h>

void fill(int array[], size_t arr_size);

int main()
{
    int i;
    int array[4] = {0,0,0,0};
    fill(array,4);
    for(i=0;i< (sizeof(array)/sizeof(array[0]));i++)
    {
        printf("%d ",array[i]);
    }
}

void fill(int array[], size_t arr_size)
{
    int i;
    for(i=0;i<arr_size;i++)
    {
        array[i] = i;
    }
}