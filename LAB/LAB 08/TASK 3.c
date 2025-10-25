#include <stdio.h>    
#include <string.h>   
int main()
{
    char firstName[20], lastName[20], fullName[40]; // Declare character arrays to store first name, last name, and full name
    int countOfCharac = 0, i;  // Declare integer variables (not used in this program but can be used later)

    // Ask the user to enter their first name
    printf("Enter your First Name: ");
    scanf("%s", firstName);  // Read first name from user (no '&' needed since array name is already a pointer)

    // Ask the user to enter their last name
    printf("Enter your Last Name: ");
    scanf("%s", lastName);   // Read last name from user

    // Combine first name and last name into full name
    // Note: fullName must be initialized before using strcat()
    strcpy(fullName, firstName);  // Copy first name into fullName
    strcat(fullName, " ");        // Add a space between first and last name
    strcat(fullName, lastName);   // Append last name to fullName

    // Display the full name
    printf("Your Full Name is %s", fullName);
	return 0;  
}

