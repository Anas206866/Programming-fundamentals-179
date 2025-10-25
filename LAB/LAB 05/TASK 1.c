#include <stdio.h>   
int main() 
{
    char ch;   // Declare a character variable to store user input

    // Prompt the user to enter any character
    printf("Enter any character: ");
    scanf("%c", &ch);   // Read a single character input from the user

    // Switch statement to check whether the entered character is a vowel or consonant
    switch(ch) 
	{ 
	 /* Evaluate the value of variable 'ch' */
        case 'a':  // If character is 'a'
        case 'e':  // If character is 'e'
        case 'i':  // If character is 'i'
        case 'o':  // If character is 'o'
        case 'u':  // If character is 'u'
        case 'A':  // If character is 'A'
        case 'E':  // If character is 'E'
        case 'I':  // If character is 'I'
        case 'O':  // If character is 'O'
        case 'U':  // If character is 'U'
            printf("vowel");   // Print “vowel” if any of the above cases match
            break;             // Exit switch after a match

        default:
            // If none of the above cases match, it must be a consonant
            printf("Consonant");
    }
	return 0;  
}

