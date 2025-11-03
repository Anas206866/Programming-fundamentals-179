//Concatenate first name and last name using strcat
#include<stdio.h>
#include<string.h>
int main()
{
	char firstName[20] = "John";
	char lastName[] = " Doe";
	
	//Concatenate last name to first name
	strcat(firstName, lastName);
	printf("Fulll name: %s\n", firstName);
	return 0;
} 
