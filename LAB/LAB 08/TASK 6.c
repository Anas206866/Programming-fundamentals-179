#include <stdio.h>     
#include <string.h>    
int main() 
{
    // Declare and initialize string 'a' with enough space to hold the final result
    char a[20] = "Good";   // 'a' initially contains "Good"
    
    // Declare and initialize string 'b'
    char b[] = "Morning";  // 'b' contains "Morning"

    // Concatenate (join) string 'b' to the end of string 'a'
    // After this, 'a' becomes "GoodMorning"
    strcat(a, b);

    // Display the final result
    printf("Result: %s", a);
	return 0;  
}

