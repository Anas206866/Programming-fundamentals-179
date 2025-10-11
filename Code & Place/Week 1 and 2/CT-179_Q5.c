//Hand On Activity No:2
#include<stdio.h>
int main()
{
	float watts, kilowatts;
	printf("Enter power in watts: ");
	scanf("%f", &watts);
	kilowatts=watts/1000;
	printf("The power in kilowatts is:%f\n", kilowatts);
	return 0;
}

