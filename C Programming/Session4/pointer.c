#include <stdio.h>

// *((char*)&x)
// *(&x) = 100 same as x=100

/*
const int name = 5; 
if placed inside main, name is placed inside the stack RAM so no error
but if placed outside the main, it will give an error since it is placed in 
the ROM section, which we can't access in runtime, needs a programmer with high I & V
*/

// static is a solution to a dangling pointer (which returns a deleted variable, so another variable can
// come in its place soln: static keyword, which moves the variable from the stack to the .data 
// section which is seen locally across all the file)

int main()
{
    int x = 0x40506070;
    char *p = (char*) &x;
    int *add = &x;
    if(*p == 0x70)
    {
        printf("Little Endian");
    }
    else
    {
        printf("Big Endian");
    }
    printf("\n");
    printf("%x \n",p);
    printf("%x \n",&x);
    printf("%d",sizeof(long));
}