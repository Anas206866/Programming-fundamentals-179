#include <stdio.h>   
int main(void)      
{
    int num1, num2, add, subt, multi, mod;  // Declare integer variables for inputs and results
    float div;                              // Declare float variable for division result

    // Display the purpose of the program
    printf("Program: Arithmetic operations.\n");

    // Ask the user to enter the first number
    printf("Enter 1st number: ");
    scanf("%d", &num1);  // Read and store the first integer input

    // Ask the user to enter the second number
    printf("Enter 2nd number: ");
    scanf("%d", &num2);  // Read and store the second integer input

   // Performing arithmetic operations
   
    add = num1 + num2;        // Calculate addition of num1 and num2
    subt = num1 - num2;       // Calculate subtraction (num1 minus num2)
    multi = num1 * num2;      // Calculate multiplication of num1 and num2
    div = (float)num1 / num2; // Typecast num1 to float for accurate division result
    mod = num1 % num2;        // Calculate modulus (remainder of division)

    // Display all the results
    printf("Addition = %d\n", add);             // Show addition result
    printf("Subtraction = %d\n", subt);         // Show subtraction result
    printf("Multiplication = %d\n", multi);     // Show multiplication result
    printf("Division = %.2f\n", div);           // Show division result (2 decimal places)
    printf("Modulus = %d\n", mod);              // Show modulus result
	return 0;  
}
