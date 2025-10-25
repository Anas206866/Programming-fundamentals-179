#include <stdio.h>   
int main( )
{
    int num1, num2;   // Declare two integer variables to store the user’s input

    // Ask the user to enter the first number
    printf("Enter the Value of First Number:");
    scanf("%d", &num1);  // Read and store the first number

    // Ask the user to enter the second number
    printf("Enter the Value of Second Number:");
    scanf("%d", &num2);  // Read and store the second number

    // Check if the two numbers are not equal
    if (num1 != num2)
    {
        printf("First Number is not equal to Second Number\n");

        // If numbers are not equal, check which one is greater
        if (num1 > num2)
        {
            printf("First Number is greater than Second Number\n");
        }
        else
        {
            printf("Second Number is greater than First Number\n");
        }
    }
    else
    {
        // If numbers are equal
        printf("First Number is equal to Second Number\n");
    }

    return 0;   
}

