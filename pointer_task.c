#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
double salary;
printf("Enter your salary: ");
scanf("%lf", &salary);
double *arr = &salary;
printf("%.2lf\n", *arr);
double new_salary;
new_salary = *arr * 2;
printf("%.2lf", new_salary);
return (0);
}
