#include <stdio.h>

void add(int a ,int b)
{
    printf("Addition: %d",a+b);
}

void subtract(int a ,int b)
{
    printf("Subtraction: %d",a-b);
}

void multiply(int a ,int b)
{
    printf("Multiplication: %d",a*b);
}

int main()
{
    void (*fcn_ptr_arr[])(int,int) = {&add,&subtract,&multiply};
    int ch,a=10,b=5;
    printf("Enter choice: ");
    scanf("%d",&ch);
    (*fcn_ptr_arr[ch])(a,b);
}