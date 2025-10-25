#include <stdio.h>   
int main(void)
{
    int i, j;   // Declare two integer variables for loop counters

    // Outer loop controls the number of rows (from 1 to 5)
    for (i = 1; i <= 5; i++)
    {
        // Inner loop prints stars equal to the current row number
        for (j = 1; j <= i; j++)
        {
            printf("*");   // Print a single star without moving to the next line
        }

        printf("\n");  // After printing stars for one row, move to the next line
    }
	return 0; 
}

