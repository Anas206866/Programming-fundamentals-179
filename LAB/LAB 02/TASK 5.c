#include <stdio.h>   
int main()           
{
    // Display the purpose of the program
    printf("Find Whether the Given Number is Positive, Negative or Zero (Neutral)\n");

    int num;  // Declare an integer variable to store the user's input number

    // Ask the user to enter a number
    printf("Enter the Number: ");
    scanf("%d", &num);  // Read and store the entered number from the user

    // Check whether the number is positive, negative, or zero
    if (num > 0) 
	{
        // Condition true when number is greater than zero
        printf("Number is Positive");
    } 
    else if (num < 0) 
	{
        // Condition true when number is less than zero
        printf("Number is Negative");
    } 
    else 
	{
        // Executes when number is neither positive nor negative (i.e., zero)
        printf("Number is Zero (Neutral)");
    }
	return 0;  
}
