#include <stdio.h>   
int main() 
{
    int i = 4;         // Initialize variable i to start from 4
    float sum = 1.00;  // Start sum with 1 (the first term of the series)

    // Loop runs until i becomes greater than 400
    while (i <= 400) 
	{
        if (i % 4 == 0) 
		{      
		 // Check if i is a multiple of 4
            sum += 1.0 / i;     // Add the reciprocal of i to the sum
        }
        i++;  // Increment i by 1 in each iteration
    }

    // Display the final result of the series
    printf("The sum of series 1 + 1/4 + 1/8 + ... + 1/400 is %.3f", sum);
	return 0;  
}

