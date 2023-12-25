/*
 ============================================================================
 Name        : Lab01.c
 Author      : AMIT Learning
 ========================================================
 Implement a program that takes the grade of a student ranging
 from 0 to 100; and prints the grade as Excellent, Very Good,
 Good, Pass, Fail
 * Use “if ” statements
 ============================================================================
*/

#include <stdio.h>

int main (void)
{
    int grade = 0;
    while (1)
    {
        printf("Please enter the student's grade.\n");
        scanf("%d", &grade);

        if (grade < 100 && grade >= 90)
            printf("The grade is %d, Excellent!\n", grade);

        else if (grade < 90 && grade >= 80)
            printf("The grade is %d, Very good!\n", grade);

        else if (grade < 80 && grade >= 70)
            printf("The grade is %d, Good!\n", grade);

        else if (grade < 70 && grade >= 50)
        {
             printf("The grade is %d, Pass.\n", grade);
             printf("But you can do better!\n");
        }

        else if (grade < 50 && grade >= 0)
        {
            printf("The grade is %d, Fail.\n", grade);
            printf("Please try harder!\n");
        }

        else printf("Please enter a valid grade.\n");

    }

	return 0;
}
