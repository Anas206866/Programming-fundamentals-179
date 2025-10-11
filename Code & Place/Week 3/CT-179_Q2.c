//Temperature Checker (Simple if) Program
#include<stdio.h>
int main()
{
	float temperature;
	//Taking Input 
	printf("Enter temperature: ");
	scanf("%f", &temperature);
	//Simple If Condition
	if(temperature>30)
	{
		printf("Weather is Hot\n");
	}
	return 0;
}
