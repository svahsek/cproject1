#include <stdio.h>
#include "programs.h"

void salary() {
    float gross_salary, net_salary;
    printf("\nSalary Calculator\n");
    printf("Enter gross salary of an employee: ");
    scanf("%f", &gross_salary);
    if (gross_salary < 10000)
        net_salary = gross_salary;
    else
        net_salary = gross_salary - 0.15 * gross_salary;
    printf("Net salary is Rs.%.2f\n", net_salary);
}
