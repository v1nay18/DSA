#include <stdio.h>
#include <stdlib.h>
int main()
{
    int salary;
    printf("Enter Salary");
    scanf("%d", &salary);
    if (salary > 10000)
    {
        salary = salary + 1000;
        printf("After bonous of RS 1000 New Salary is : %d\n", salary);
        printf("After Rs 500 Medical Allowance New Salary is : %d\n", salary + 500);
    }
    else
    {
        salary = salary + 1500;
        printf("After bonous of RS 1500 New Salary is : %d\n", salary);
        printf("After Rs 500 Medical Allowance New Salary is : %d\n", salary + 500);
    }
    return 0;
}