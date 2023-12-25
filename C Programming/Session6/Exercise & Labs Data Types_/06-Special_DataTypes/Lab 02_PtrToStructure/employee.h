#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

typedef struct
{
    char name[20];
    char age;
    int salary;
} employee;
void print_employee_info(employee * emp1);

#endif // EMPLOYEE_H_INCLUDED
