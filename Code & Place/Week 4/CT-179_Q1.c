/*Interactive Challenge No:1
Leap year Checker Program*/
#include<stdio.h>
int main()
{
	int year;
	//Input year
	printf("Enter year: ");
	scanf("%d", &year);
	//Checking Leap year conditions
	if((year%400==0)||((year%4==0) && (year%100!=0)))
	{
		printf("%d is a leap year.\n", year);
	}
	else
	{
		printf("%d is not a leap year.\n", year);
	}
	return 0;
}
