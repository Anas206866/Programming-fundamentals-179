#include <stdio.h>   
int main()           
{
    int num1, num2, num3;  // Declare three integer variables to store user inputs

    // Display the purpose of the program
    printf("Find Maximum of Three Numbers!\n");

    // Ask the user to input three numbers
    printf("Enter Number 1: ");
    scanf("%d", &num1);  // Read and store the first number

    printf("Enter Number 2: ");
    scanf("%d", &num2);  // Read and store the second number

    printf("Enter Number 3: ");
    scanf("%d", &num3);  // Read and store the third number

    // Check if all three numbers are equal
    if (num1 == num2 && num2 == num3) 
	{
        printf("All Numbers are Equal");
    }
    else 
	{
        // If not all equal, determine which one is the largest
        if (num1 > num2 && num1 > num3) {
            // If num1 is greater than both num2 and num3
            printf("%d is Maximum", num1);
        } 
        else if (num2 > num1 && num2 > num3)
	   {
            // If num2 is greater than both num1 and num3
            printf("%d is Maximum", num2);
        } 
        else 
		{
            // Otherwise, num3 is the largest
            printf("%d is Maximum", num3);
        }
    }
	return 0; 
}

