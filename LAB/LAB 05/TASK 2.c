#include <stdio.h>   
int main() 
{
    int day;   // Declare an integer variable to store the day number entered by the user

    // Ask the user to enter a number from 1 to 7
    printf("Enter day number (1-7): ");
    scanf("%d", &day);   // Read and store the entered day number

    // Use a switch statement to print the corresponding day name
    switch (day) {
        case 1:
            printf("Monday");    // If day == 1, print Monday
            break;               // Exit switch
        case 2:
            printf("Tuesday");   // If day == 2, print Tuesday
            break;
        case 3:
            printf("Wednesday"); // If day == 3, print Wednesday
            break;
        case 4:
            printf("Thursday");  // If day == 4, print Thursday
            break;
        case 5:
            printf("Friday");    // If day == 5, print Friday
            break;
        case 6:
            printf("Saturday");  // If day == 6, print Saturday
            break;
        case 7:
            printf("Sunday");    // If day == 7, print Sunday
            break;
        default:
            // If the entered number is not between 1 and 7
            printf("Invalid Day");
    }
	return 0;   
}

