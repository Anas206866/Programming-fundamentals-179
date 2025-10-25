#include <stdio.h>   

int main() 
{
    int i, j, k, n = 5;   // Declare variables (i, j, k for loops, n for height of pyramid)

    // Outer loop controls the number of rows (from 0 to n)
    for (i = 0; i <= n; i++) 
	{
	    // Inner loop 1: prints spaces before stars to center-align the pyramid
        for (j = 1; j <= n - i; j++) 
		{
            printf(" ");
        }

        // Inner loop 2: prints stars in each row
        // The number of stars increases by 2 for each row (1, 3, 5, 7, ...)
        for (k = 1; k <= 2 * i - 1; k++) 
		{
            printf("*");
        }

        // Move to the next line after printing one row of spaces and stars
        printf("\n");
    }
	return 0;  
}

