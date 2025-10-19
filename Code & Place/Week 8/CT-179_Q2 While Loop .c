//Reversing A Number Program Using While Loop
#include <stdio.h>
int main() 
{
    int number;        // To store the input number
    int reversed = 0;  // To store the reversed number
    int digit;         // To store each digit
	// Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);
	// Use a while loop to reverse the number
    while (number != 0) 
	{
        digit = number % 10;            // Get the last digit
        reversed = reversed * 10 + digit; // Add digit to reversed number
        number = number / 10;           // Remove the last digit
    }
	// Print the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}

