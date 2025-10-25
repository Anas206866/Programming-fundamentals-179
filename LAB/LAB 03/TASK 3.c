#include <stdio.h>   
int main()
{
    // Display the purpose of the program
    printf("Find Whether the Given Number is Even or Odd\n");

    int num;  // Declare an integer variable to store the user's input number

    // Ask the user to enter a number
    printf("Enter Number: ");
    scanf("%d", &num);  // Read and store the entered number from user input

    // Use the conditional (ternary) operator to check whether the number is even or odd
    // The expression (num % 2 == 0) checks if the remainder is 0 when divided by 2.
    // If true ? the number is even; otherwise ? the number is odd.
    (num % 2 == 0) ? printf("Number is Even") : printf("Number is Odd");
	return 0;  
}

