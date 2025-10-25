#include <stdio.h>
#include <string.h>
int main() 
{
    char name[50];  // Declare a character array (string) to store the user's name

    printf("Greeting Program\n");       // Display program title
    printf("Enter your name: ");        // Prompt the user for input

    // Use fgets() instead of gets() — it’s safer and prevents buffer overflow
    fgets(name, sizeof(name), stdin);

    // Remove the newline character that fgets() stores at the end of the string
    name[strcspn(name, "\n")] = '\0';

    // Display the greeting
    printf("Hello, %s\n", name);
	 return 0;  
}

