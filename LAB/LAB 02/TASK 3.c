#include <stdio.h>   
int main(void)      
{
    // Display the purpose of the program
    printf("Find Minimum Of Two Numbers\n");

    int num1, num2;  // Declare two integer variables to store user inputs

    // Ask the user to enter the first number
    printf("Enter 1st number: ");
    scanf("%d", &num1);  // Read and store the first number

    // Ask the user to enter the second number
    printf("Enter 2nd number: ");
    scanf("%d", &num2);  // Read and store the second number

    // Compare the two numbers to find the smaller one
    if (num1 < num2) 
	{
        // If num1 is less than num2, print num1 as the minimum
        printf("Minimum number is: %d\n", num1);
    } 
	else 
	{
        // Otherwise, num2 is the minimum number
        printf("Minimum number is: %d\n", num2);
    }
	return 0;  
}
