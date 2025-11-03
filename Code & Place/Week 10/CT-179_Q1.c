//Find sum of diagonal elements in a square 2D array
#include<stdio.h>
int main()
{
	int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int sum = 0;
	int i;
	
	//Loop to find sum of diagonal elements
	for(i=0; i<3; i++)
	{
		sum += matrix[i][i];
	}
	
	printf("Sum of diagonal elements = %d\n", sum);
	return 0;
}
