#include <stdio.h>   
int main(void)       
{
    // Display the purpose of the program
    printf("Find Whether the Given Number is Even or Odd\n");

    int num;  // Declare an integer variable to store the user input

    // Ask the user to enter a number
    printf("Enter Number: ");
    scanf("%d", &num);  // Read and store the entered number

    // Check whether the number is even or odd
    if (num % 2 == 0) 
	{ 
	 // If the remainder when divided by 2 is zero, it’s even
        printf("Number is Even");
    } 
	else 
	{  
	 // Otherwise, the number is odd
        printf("Number is Odd");
    }
	return 0;  
}
