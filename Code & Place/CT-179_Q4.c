//Interactive Challenge No:4
#include<stdio.h>
int main()
{
	float weight, dosage;
	printf("Enter patient's weight: ");
	scanf("%f", &weight);
	dosage=weight*0.8;
	printf("The dosage(mg) for the paatient is:%f\n",dosage);
	return 0;
}
