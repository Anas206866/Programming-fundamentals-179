#include <stdio.h>    
#include <string.h>    

int main() 
{
    // Declare and initialize the source string
    char src[] = "Hello";

    // Declare destination string (empty for now)
    // Make sure it is large enough to hold the copied string
    char dest[20];

    // Copy the content of 'src' into 'dest' using strcpy()
    strcpy(dest, src);

    // Display the original (source) string
    printf("Actual String: %s\n", src);

    // Display the copied (destination) string
    printf("Copied String: %s\n", dest);

    return 0;  // End of program
}

