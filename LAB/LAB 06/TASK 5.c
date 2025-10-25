#include <stdio.h>   
int main() 
{
    int number, count = 0;   // Declare variables: 'number' stores input, 'count' stores digit count

    printf("Find the Digits Of a Number\n");  // Program title
    printf("Enter Number: ");                 // Prompt user for input
    scanf("%d", &number);                     // Read integer input from user

    // Loop runs until the number becomes 0
    while (number != 0) 
	{
        number = number / 10;  // Remove the last digit by integer division
        count = count + 1;     // Increment digit count
    }

    // Display the total number of digits
    printf("The number of digits are: %d", count);
	return 0;  
}

