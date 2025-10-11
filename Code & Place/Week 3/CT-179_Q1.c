//Temperature Convertor Program
#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	//Taking Input From User
	printf("Enter the Temperature in Celsius: ");
	scanf("%f", &celsius);
	//Conversion Formula
	fahrenheit=(celsius*9/5)+32;
	//Display result
	printf("Temperature in Fahrenheit: %.2f\n",fahrenheit);
	/* 
	Interactive Challenge Observations:
	Input: 100  Output: 212.00 (Boiling Point Of Water)
	Input: 0  Output: 32.00 (Freezing Point Of Water)
	Input: -40  Output: -40.00 (Same in both celsius and fahrenheit scale)
	*/
	return 0;
}	
