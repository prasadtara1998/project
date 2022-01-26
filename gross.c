#include <stdio.h>

int main()
{
    float salary;
    printf("Enter Basic Salary of Employee:\t");
    scanf("%f",&salary);
    salary = (1+0.4+0.2)*salary;
    printf("Gross Salary of the Employee is:%9.2f",salary);
    return 0;
}
