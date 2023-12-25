/*
 ============================================================================
 Name        : Lab02.c
 Author      : AMIT Learning
 ========================================================
 Implement a program that takes the grade of a student ranging
 from 0 to 100; and prints the grade as Excellent, Very Good,
 Good, Pass, Fail
 * Use “switch” statement
 ============================================================================
*/

#include <stdio.h>

int main (void)
{
    int input = 0;
    int grade = 0;
    while (1)
    {
        printf("Please enter the student's grade.\n");
        scanf("%d", &input);
        if (input <= 100 && input >=0)
        {
            grade = input / 10;

            switch (grade)
            {
            case 10:
                printf("The grade is %d, Excellent!\n", input);
                break;
            case 9:
                printf("The grade is %d, Excellent!\n", input);
                break;
            case 8:
                printf("The grade is %d, Very good!\n", input);
                break;
            case 7:
                printf("The grade is %d, Good!\n", input);
                break;
            case 6:
                {
                    printf("The grade is %d, Pass.\n", input);
                    printf("But you can do better!\n");
                    break;
                }
            case 5:
                {
                    printf("The grade is %d, Pass.\n", input);
                    printf("But you can do better!\n");
                    break;
                }
            default:
                {
                    printf("The grade is %d, Fail.\n", input);
                    printf("Please try harder!\n");
                    break;
                }
            }
        }
        else printf("Please enter a valid grade.\n");
    }
	return 0;
}
