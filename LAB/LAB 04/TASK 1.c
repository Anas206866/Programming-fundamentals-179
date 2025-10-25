#include <stdio.h>  
int main()           
{
    int age, hasId;  // Declare integer variables: 'age' for user's age, 'hasId' to check if the user has an ID

    // Display program title
    printf("Voting Checker!!!\n");

    // Ask the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);  // Read and store the user's age

    // Check if the user is 18 or older (eligible by age)
    if (age >= 18) 
	{
        // Ask if the user has an ID card
        printf("Do you have an ID card? If yes, type (1). If no, type (0): ");
        scanf("%d", &hasId);  // Read and store whether the user has an ID

        // Nested if-else: check ID card status
        if (hasId == 1) 
		{
            // If the user has an ID card
            printf("You are eligible for voting");
        } 
		else if (hasId == 0) 
		{
            // If the user meets the age requirement but lacks an ID
            printf("You meet the age requirement but do not have an ID Card.");
        } 
		else 
		{
            // If the user enters an invalid input (not 1 or 0)
            printf("Invalid Input!!");
        }
    } 
	else 
	{
        // If the user's age is less than 18
        printf("You are not eligible for voting.");
    }
	return 0;  
}

