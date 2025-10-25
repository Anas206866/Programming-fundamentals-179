#include <stdio.h>  
int main() 
{
    int num, i;               // Declare integer variables for number input and loop counter
    long long factorial = 1;  // Variable to store factorial result (use long long for large values)

    // Ask the user to enter a number
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);        // Read the user input and store it in variable 'num'

    // Check if the entered number is negative
    if (num < 0) 
	{
        // Factorial of negative numbers is not defined
        printf("Factorial of a negative number is not defined.\n");
    } 
    else 
	{
        // Use a for loop to calculate factorial
        // Loop runs from 'num' down to 1, multiplying all values together
        for (i = num; i >= 1; i--) 
		{
            factorial *= i;  // Multiply factorial by current value of i
        }

        // Display the result
        printf("Factorial of %d is %lld\n", num, factorial);
    }
	return 0;  
}

