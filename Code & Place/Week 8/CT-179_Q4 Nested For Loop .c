//Display Pairs Whose Sum is Even (1-n range) Program Using Nested For Loop
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter a number (n): ");
    scanf("%d", &n);
	printf("Pairs whose sum is even:\n");
	int i, j;  // ? Declare outside the loops
	for (i = 1; i <= n; i++) 
	{
        for (j = 1; j <= n; j++) 
		{
            if ((i + j) % 2 == 0) 
			{
                printf("(%d,%d) ", i, j);
            }
        }
    }
	printf("\n");
    return 0;
}



