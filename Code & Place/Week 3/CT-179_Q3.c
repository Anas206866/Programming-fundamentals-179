//Even/Odd Number Checker (If else) Program
#include<stdio.h>
int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	//If-else condition to check even or odd
	if(number%2==0)
	{
		printf("Even number\n");
	}
	else
	{
		printf("Odd number\n");
	}
	return 0;
}
