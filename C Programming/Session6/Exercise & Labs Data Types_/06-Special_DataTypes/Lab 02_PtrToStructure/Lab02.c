/*
==================================================================================
Author: AMIT Learning
Name: Lab 02
Target: Data structure
==================================================================================
Description:
+ Create a structure with attributes (char name[20], char age, int salary).
+ Create 3 instances of the structure.
+ Create a function to print the attributes of the function.
+ The function should take a pointer to the structure.
+ Create a pointer to the structure.
+ Initialize the attributes for the 3 instances of the structure.
+ use the pointer to call the function 3 times for the 3 instances the structure.
==================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

#define MAX_NUMBER_OF_EMPLOYEES 100

char employee_number = 0;

int main()
{
    employee emp[MAX_NUMBER_OF_EMPLOYEES];
    /*strcpy(emp[0].name, "Employer 1");
    strcpy(emp[1].name, "Employer 2");
    strcpy(emp[2].name, "Employer 3");*/
    employee *p_emp;
    p_emp = &emp[employee_number];

    for (employee_number ; employee_number < MAX_NUMBER_OF_EMPLOYEES; employee_number++)
    {
        /*p_emp -> age = 25 + i;
        p_emp -> salary = 5000 + i*1000;*/
        printf("Employer no. %d\n", employee_number + 1);
        printf("name: ");
        scanf("%s", &p_emp -> name);
        printf("age: ");
        scanf("%d", &p_emp -> age);
        printf("salary: ");
        scanf("%d", &p_emp -> salary);
        printf("\nEmployer no. %d\n", employee_number + 1);
        print_employee_info(p_emp);
        p_emp = &emp[employee_number];
    }
    return 0;
}
