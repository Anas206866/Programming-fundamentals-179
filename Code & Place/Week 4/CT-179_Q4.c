/*Interactive Challenge No:4
Character Classification Program*/
#include<stdio.h>
int main()
{
	char ch;
	//Input a character
	printf("Enter a character: ");
	scanf("%c", &ch);
	//Classification Of Character By checking conditions
	if(ch>='A' && ch<='Z')
	{
		printf("The character '%c' is an Uppercase Letter.\n", ch);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("The character '%c' is an Lowercase Letter.\n", ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("The character '%c' is a Digit.\n", ch);
	}
	else
	{
		printf("The character '%c' is a Special Character.\n", ch);
	}
	return 0;
}
