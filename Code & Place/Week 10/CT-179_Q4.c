//Compare two user-input strings using strcmp
#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[50], str2[50];

    // Taking user input
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Compare strings using strcmp
    if(strcmp(str1, str2) == 0)
        printf("Equal\n");
    else
        printf("Not Equal\n");

    return 0;
}


