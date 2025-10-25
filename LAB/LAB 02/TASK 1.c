#include <stdio.h>  
int main(void)      
{
    int age;         // Declare an integer variable to store the user's age

    // Ask the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);  // Read and store the entered age

    // Check if the user's age is 18 or above
    if (age >= 18) 
	{ 
        // If the condition is true, print that the user is eligible for voting
        printf("You are eligible for Voting");
    }
    else 
	{
        // If the condition is false, print that the user is not eligible for voting
        printf("You are not eligible for Voting");
    }
	return 0; 
}
