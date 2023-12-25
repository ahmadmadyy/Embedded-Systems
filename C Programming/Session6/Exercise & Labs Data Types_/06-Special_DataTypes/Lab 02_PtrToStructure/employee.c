#include "employee.h"

void print_employee_info(employee * emp1)
{
    printf("Employer name  : %s.\n", emp1 -> name);
    printf("Employer age   : %d.\n", emp1 -> age);
    printf("Employer salary: %d.\n\n", emp1 -> salary);
}
