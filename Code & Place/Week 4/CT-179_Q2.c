/*Interactive Challenge No:2
Triangle Type Identifier Program*/
#include<stdio.h>
int main()
{
	int s1,s2,s3;
	//Input three sides of the triangle
	printf("Enter side 1 of the triangle: ");
	scanf("%d", &s1);
	printf("\nEnter side 2 of the triangle: ");
	scanf("%d", &s2);
	printf("\nEnter side 3 of the triangle: ");
	scanf("%d", &s3);
	//Check if it forms a valid triangle
	if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
	{
		//Now classifying the triangle by checking conditions
		if(s1==s2 && s2==s3)
		{
			printf("The triangle is Equailateral.\n");
		}
		else if(s1==s2 || s2==s3 || s1==s3)
		{
			printf("The triangle is Isosceles.\n");
		}
		else
		{
			printf("The triangle is Scalene.\n"); 
		}
    }
    else
    {
    	printf("The given sides do not form a valid triangle.\n");
	}
	return 0;
}
