#include <stdio.h>   
int main() 
{
    int var1, var2;   // Declare two integer variables

    // Ask the user to enter the value of var1
    printf("Enter value of var1: ");
    scanf("%d", &var1);   // ? Corrected: use %d for int (not %f)

    // Ask the user to enter the value of var2
    printf("Enter value of var2: ");
    scanf("%d", &var2);   // ? Corrected: use %d for int (not %f)

    // Compare both values
    if (var1 > var2) 
	{
        printf("var1 is greater than var2");   // Print if var1 is greater
    } 
	else 
	{
        printf("var2 is greater than var1");   // Print if var2 is greater or equal
    }
	return 0;   
}

