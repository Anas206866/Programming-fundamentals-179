#include <stdio.h>   
#include <string.h>  
int main() 
{
    char name[50];  // Declare a string (character array) to store the user's name

    // Display program title and ask for user input
    printf("Program: Print your name in reverse\n");
    printf("Enter your name: ");

    // Use fgets() to safely take user input (prevents buffer overflow)
    fgets(name, sizeof(name), stdin);

    // Remove the newline character that fgets() adds at the end of input
    name[strcspn(name, "\n")] = '\0';

    // Display message before showing the reversed name
    printf("\nYour name in reverse is: ");

    int i;  // Declare loop variable (outside loop for C90 compatibility)

    // Loop through the string in reverse order
    for (i = strlen(name) - 1; i >= 0; i--) 
	{
        printf("%c", name[i]);  // Print each character starting from the end
    }

    printf("\n");  // Move to the next line for clean output
	return 0;  
}

