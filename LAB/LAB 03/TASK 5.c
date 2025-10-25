#include <stdio.h>   
int main()
{
	// Declare variables for distances, time, and average speed
    float distance1, distance2, distance3, distance4, distance5, time, avgSpeed;

    // Display program title and note
    printf("Car Average Speed Calculator!!!\n");
    printf("Distance can never be negative!\n");

    // Ask the user to enter 5 distances (in km, miles, etc.)
    printf("Enter distance1: ");
    scanf("%f", &distance1);

    printf("Enter distance2: ");
    scanf("%f", &distance2);

    printf("Enter distance3: ");
    scanf("%f", &distance3);

    printf("Enter distance4: ");
    scanf("%f", &distance4);

    printf("Enter distance5: ");
    scanf("%f", &distance5);

    // Ask the user how many hours (1–5) they traveled
    printf("Enter the time you travelled in (1 to 5):");
    scanf("%f", &time);

    // Calculate average speed using nested ternary operators
    // Formula: avgSpeed = total_distance / total_time
    // The expression selects the correct total distance based on the entered time.
    time == 1 ? avgSpeed = (distance1) / time :
    time == 2 ? avgSpeed = (distance1 + distance2) / time :
    time == 3 ? avgSpeed = (distance1 + distance2 + distance3) / time :
    time == 4 ? avgSpeed = (distance1 + distance2 + distance3 + distance4) / time :
    time == 5 ? avgSpeed = (distance1 + distance2 + distance3 + distance4 + distance5) / time :printf("Enter correct time\n");   // If time is not between 1 and 5

    // Check if time entered is valid (between 1 and 5)
    // If valid, print the calculated average speed
    // Otherwise, show an error message and end the program
    (time <= 5 && time > 0) ? printf("The Average Speed of your car is: %f", avgSpeed): printf("Program ended!");

    return 0;  // 
}

