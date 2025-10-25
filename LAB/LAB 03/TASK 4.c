#include <stdio.h>  
int main()           
{
    int num1, num2;  // Declare two integer variables to store user input

    // Display the purpose of the program
    printf("Program: Binary operations with Bitwise Operators.\n");

    // Ask the user to enter the first number
    printf("Enter 1st number: ");
    scanf("%d", &num1);  // Read and store the first number

    // Ask the user to enter the second number
    printf("Enter 2nd number: ");
    scanf("%d", &num2);  // Read and store the second number

    // Perform various bitwise operations and display results

    // Bitwise AND (&): Performs AND operation on each bit of num1 and num2
    printf("BITWISE AND OPERATOR = %d\n", num1 & num2);

    // Bitwise OR (|): Performs OR operation on each bit of num1 and num2
    printf("BITWISE OR OPERATOR = %d\n", num1 | num2);

    // Bitwise NOT (~): Inverts all bits of num1 (1’s become 0’s and 0’s become 1’s)
    printf("BITWISE NOT OPERATOR (num1) = %d\n", ~num1);

    // Bitwise XOR (^): Performs exclusive OR on each bit of num1 and num2
    printf("BITWISE XOR OPERATOR = %d\n", num1 ^ num2);

    // Left Shift (<<): Shifts all bits of num1 to the left by 1 position (multiplies by 2)
    printf("LEFT SHIFT (num1<<1) = %d\n", num1 << 1);

    // Right Shift (>>): Shifts all bits of num2 to the right by 1 position (divides by 2)
    printf("RIGHT SHIFT (num2>>1) = %d\n", num2 >> 1);
	return 0; 
}

