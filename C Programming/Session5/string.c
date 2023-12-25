#include <stdio.h>

int main()
{
    char str1[5] = "Ahmed"; // no end, so needs '\0'
    char str2[] = "Mohamed";
    char str3[] = {'A','h','m','\0','e','d'};
    printf("%s",str3);
    int i;
    for(i=0; str3[i]!='\0';i++);
    printf(" %d \n",i);
}