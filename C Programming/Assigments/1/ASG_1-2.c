#include <stdio.h>

int main()
{
    int x;
    printf("Enter any number: ");
    scanf(" %d",&x);
    int y;
    printf("Enter nth bit to toggle: ");
    scanf(" %d",&y);
    int z = x ^ (1<<y);
    printf("Number before toggling bit %d: %d \n",y,x);
    printf("Number after toggling bit %d: %d",y,z);
}