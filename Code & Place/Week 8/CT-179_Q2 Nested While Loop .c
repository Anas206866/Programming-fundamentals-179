//Multiplication Table (1-5 Tables) Program Using Nested While Loop
#include <stdio.h>
int main() 
{
    int i = 1, j;
	while (i <= 5) 
	{ 
	// Outer loop for tables 1 to 5
        j = 1;
        printf("\nMultiplication Table of %d\n", i);
        printf("------------------------\n");
		while (j <= 10) { // Inner loop for each table (1 to 10)
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }
		i++;
        printf("\n");
    }
	return 0;
}

