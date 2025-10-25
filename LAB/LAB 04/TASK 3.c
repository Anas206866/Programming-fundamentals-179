#include <stdio.h>  
int main(void)       
{
    int percentage;  // Declare an integer variable to store the student's percentage

    // Ask the user to enter their percentage
    printf("Enter your Percentage: ");
    scanf("%d", &percentage);  // Read and store the entered percentage

    // Check and assign grades based on the percentage using if–else if ladder
    if (percentage >= 90) 
	{
        // If percentage is 90 or above
        printf("Your grade is 'A+'");
    }
    else if (percentage >= 80) 
	{
        // If percentage is between 80 and 89
        printf("Your grade is 'A'");
    }
    else if (percentage >= 70) 
	{
        // If percentage is between 70 and 79
        printf("Your grade is 'B'");
    }
    else if (percentage >= 60) 
	{
        // If percentage is between 60 and 69
        printf("Your grade is 'C'");
    }
     else if (percentage >= 50) 
	{
        // If percentage is between 50 and 59
        printf("Your grade is 'D'");
    }
    else 
	{
        // If percentage is below 60
        printf("You are FAIL!!!");
    }
	return 0;  
}

