#include <stdio.h>

int main()
{
printf("Enter Grade: \n");
int grade = 50;
scanf(" %d",&grade);
if(grade >= 90)
{
    printf("Grade: A");
}
else if(grade < 90 && grade > 80)
{
    printf("Grade: B");
}
else if(grade < 80 && grade >= 70)
{
    printf("Grade: C");
}
else if(grade < 70 && grade <=60)
{
    printf("Grade: D");
}
else
{
    printf("Grade: F");
}
    
}