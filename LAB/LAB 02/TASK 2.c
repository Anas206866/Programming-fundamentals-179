#include <stdio.h>   
int main(void)       
{
    int year;        // Declare an integer variable to store the year

    // Ask the user to enter a year
    printf("Enter year: ");
    scanf("%d", &year);  // Read and store the entered year from user input

    // Check if the year is a leap year
    if (year % 400 == 0)  // If a year is divisible by 400, it is a leap year
    {
        printf("%d is a Leap Year", year);
    }
    // If not divisible by 400, check if it’s divisible by 4 but not by 100
    else if ((year % 4 == 0) && (year % 100 != 0))
    {
        printf("%d is a Leap Year", year);
    }
    else  // If neither condition is true, then it's not a leap year
    {
        printf("%d is not a Leap Year", year);
    }
	return 0;  
}
