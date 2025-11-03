//Copy first 4 letters of "Programming" using strncpy
#include <stdio.h>
#include <string.h>
int main() 
{
    char source[] = "Programming";
    char destination[5]; // Only 4 letters + '\0'

    // Copy first 4 characters safely
    strncpy(destination, source, 4);
    destination[4] = '\0'; // Manually add null terminator

    printf("Copied string: %s\n", destination);
    return 0;
}



