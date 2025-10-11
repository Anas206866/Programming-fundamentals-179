/*Interactive Challenge No:3
Electricity Bill Program*/
#include<stdio.h>
int main()
{
	int units;
	float bill=0;
	//Input units consumed
	printf("Enter the number of units consumed: ");
	scanf("%d", &units);
	//Bill calculation
	if(units<=100)
	{
		bill=units*5;
	}
	else if(units<=200)
	{
		bill=(100*5)+((units-100)*7);
	}
	else
	{
		bill=(100*5)+(100*7)+((units-200)*10);
	}
	//Output the bill
	printf("Electricity Bill=Rs. %.2f\n", bill);
	return 0;
}
