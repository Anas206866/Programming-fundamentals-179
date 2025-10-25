#include <stdio.h>     
#include <string.h>    
int main() 
{
    // Declare and initialize two strings
    char a[] = "Programming";
    char b[] = "Networking";

    // Compare both strings using strcmp()
    // strcmp() returns:
    //    0  ? if both strings are equal
    //   <0  ? if the first string is smaller (comes first alphabetically)
    //   >0  ? if the first string is greater (comes after alphabetically)
    int result = strcmp(a, b);

    // Check and display comparison result
    if (result == 0) 
	{
        printf("Strings are equal");
    } 
    else if (result < 0) 
	{
        printf("a is smaller than b");
    } 
    else 
	{
        printf("a is greater than b");
    }
	return 0;  
}

