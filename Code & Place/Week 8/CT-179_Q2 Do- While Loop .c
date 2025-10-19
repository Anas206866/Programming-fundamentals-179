//Sum Of Digits Of A Number Program Using Do-While Loop
#include <stdio.h>
int main()
{
    int num, sum = 0, digit;
	printf("Enter a number: ");
    scanf("%d", &num);
	do 
	{
        digit = num % 10;     // Get the last digit
        sum += digit;         // Add it to sum
        num = num / 10;       // Remove the last digit
    } 
	while (num != 0);       // Continue until num becomes 0
	printf("Sum of digits = %d\n", sum);
	return 0;
}

