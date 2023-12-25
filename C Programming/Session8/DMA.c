#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int *ptr = (int*) calloc(n,sizeof(int));
    if(ptr == NULL)
    {
        printf("FAILED");
    }
    else
    {
        printf("Please enter elements: ");
    }

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    return 0;
}