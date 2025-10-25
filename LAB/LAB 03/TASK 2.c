#include <stdio.h>   

int main()          
{
    // Display the purpose of the program
    printf("Find Maximum of Two Numbers\n");

    int num1, num2;  // Declare two integer variables to store user input numbers

    // Ask the user to enter the first number
    printf("Enter the First Number: ");
    scanf("%d", &num1);  // Read and store the first number

    // Ask the user to enter the second number
    printf("Enter the Second Number: ");
    scanf("%d", &num2);  // Read and store the second number

    // Use the conditional (ternary) operator to find and display the maximum number
    // Here:
    // - If num1 > num2, then num1 is the maximum number.
    // - Otherwise, num2 is the maximum number.
    (num1 > num2) ? printf("%d is Maximum", num1) : printf("%d is Maximum", num2);
	return 0; 
}

