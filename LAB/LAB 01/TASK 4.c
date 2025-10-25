#include <stdio.h>  
int main(void)      
{
    int taxRate, salary;     // Declare integer variables for tax rate and salary
    float tax, remSalary;    // Declare float variables for tax amount and remaining salary

    // Ask the user to enter their total salary
    printf("Enter Salary:");
    scanf("%d", &salary);    // Read the salary input from the user

    // Ask the user to enter the tax rate (as a percentage)
    printf("Enter Tax Rate:");
    scanf("%d", &taxRate);   // Read the tax rate input from the user

    // Calculate the tax by multiplying salary with tax rate divided by 100.0
    tax = salary * (taxRate / 100.0);

    // Calculate the remaining (actual) salary after deducting tax
    remSalary = salary - tax;

    // Display the original salary
    printf("Total Salary: %d\n", salary);

    // Display the calculated tax amount with two decimal places
    printf("Tax: %.2f\n", tax);

    // Display the remaining salary after tax deduction with two decimal places
    printf("Actual salary: %.2f\n", remSalary);
	return 0;  
}
