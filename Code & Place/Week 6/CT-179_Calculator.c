//SIMPLE CALCULATOR PROGRAM 
#include <stdio.h>

int main() {
    int num1, num2;      // Variables to store two integers
    char operator;       // Variable to store the operator symbol

    // Take first number as input
    printf("Enter first number: ");
    scanf("%d", &num1);

    // Take operator as input (+, -, *, /, %)
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // Space before %c ignores any leftover newline character

    // Take second number as input
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform operation based on operator using switch statement
    switch (operator) {
        case '+':   // Addition
            printf("Result: %d\n", num1 + num2);
            break;

        case '-':   // Subtraction
            printf("Result: %d\n", num1 - num2);
            break;

        case '*':   // Multiplication
            printf("Result: %d\n", num1 * num2);
            break;

        case '/':   // Division
            if (num2 == 0)  // Check for division by zero
                printf("Error: Division by zero is not allowed.\n");
            else
                printf("Result: %d\n", num1 / num2);
            break;

        case '%':   // Modulus (remainder)
            if (num2 == 0)  // Check for modulus by zero
                printf("Error: Modulus by zero is not allowed.\n");
            else
                printf("Result: %d\n", num1 % num2);
            break;

        default:    // If operator is invalid
            printf("Invalid operator.\n");
    }

    return 0;  // End of program
}

