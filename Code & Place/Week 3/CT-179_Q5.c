//Hands On Activity
#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	//Input Temperature In Celsius
	printf("Enter temperature in Celsius: ");
	scanf("%f", &celsius);
	//Convert Celsius To Fahrenheit
	fahrenheit=(celsius*9/5)+32;
	//Print conversion result
	printf("%.1fC=%.1fF\n", celsius, fahrenheit);
	//Provide Weather Recommendations
	if(celsius>=30)
	{
		printf("It's hot! Stay hydrated and wear light clothes.\n");
	}
	else if(celsius>=20)
	{
		printf("Nice weather! Perfect for Outdoor Activities.\n");
	}
	else if(celsius>=10)
	{
		printf("Cool weather. Wear a liight jacket.\n");
	}
	else if(celsius>=0)
	{
		printf("Cold! Wear warm clothes.\n"); 
	}
	else
	{
		printf("Freezing! Stay indoors and stay updated");
	}
	return 0;
}
