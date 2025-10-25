#include<stdio.h>
int main (void)
{
	int num1, num2;  // Declare two integer variables to store user input

    // Ask the user to enter the first number
    printf("Enter Number 1:");  
    scanf("%d", &num1);  // Read the first number and store it in num1

    // Ask the user to enter the second number
    printf("Enter Number 2:");
    scanf("%d", &num2);  // Read the second number and store it in num2

    // Display the numbers before swapping
    printf("Before Swapping: Number1=%d and Number2=%d\n", num1, num2);

    // Swap the two numbers without using a third variable
    num1 = num1 + num2;  // Step 1: Add both numbers and store the result in num1
    num2 = num1 - num2;  // Step 2: Subtract new num2 from num1 to get the original num1 value
    num1 = num1 - num2;  // Step 3: Subtract new num2 from num1 to get the original num2 value

    // Display the numbers after swapping
    printf("After Swapping: Number1=%d and Number2=%d", num1, num2);
    return 0;
}
