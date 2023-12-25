#include <stdio.h>

struct A
{
    char a;
    int x;
    int y;
    int i;
    double z;
} st;

int main()
{
    printf("%d",sizeof(st));
}
