#include <stdio.h>   
int main(void)
{
    int i, j;   // Declare loop variables for rows (i) and columns (j)

    // Outer loop controls the number of rows (starting from 5 down to 1)
    for (i = 5; i >= 1; i--)
    {
        // Inner loop prints stars for each row (equal to the current value of i)
        for (j = 1; j <= i; j++)
        {
            printf("*");   // Print a single star without moving to a new line
        }

        printf("\n");  // Move to the next line after printing one row of stars
    }
	return 0; 
}

