#include <stdio.h>   
int main() 
{
    int num1, num2, choice;   // Declare variables to store two numbers and user's operation choice

    // Display program title
    printf("=== Welcome to the Simple Calculator ===\n\n");

    // Ask the user to input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);   // Read and store both numbers

    // Display operation menu
    printf("\nChoose an operation to perform:\n");
    printf(" 1 -> Addition\n");
    printf(" 2 -> Subtraction\n");
    printf(" 3 -> Multiplication\n");
    printf(" 4 -> Division\n");

    // Ask the user to choose an operation
    printf("\nEnter your choice: ");
    scanf("%d", &choice);   // Read and store the user's choice

    // Use switch-case to perform the selected operation
    switch (choice) 
	{
        case 1: 
            // Perform addition if user chooses 1
            printf("Addition = %d\n", num1 + num2);
            break; 

        case 2: 
            // Perform subtraction if user chooses 2
            printf("Subtraction = %d\n", num1 - num2);
            break; 

        case 3: 
            // Perform multiplication if user chooses 3
            printf("Multiplication = %d\n", num1 * num2);
            break; 

        case 4: 
            // Perform division if user chooses 4
            if (num2 != 0) 
			{   // Check for division by zero
                printf("Division = %.2f\n", (float)num1 / num2);
            } 
			else 
			{ 
                printf("Error: Division by zero!\n");  // Handle invalid division
            }
            break;

        default: 
            // Handle invalid operation choice
            printf("Enter valid choice\n");
    }
	return 0;  
}

