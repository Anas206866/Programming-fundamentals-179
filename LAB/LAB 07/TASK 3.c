#include <stdio.h>

int main()
{
    int sum = 0, n, i;      // Declare integer variables at the top (C90 rule)
    int marks[6];           // Array to store marks of up to 6 courses
    float avg = 0.0;        // Variable to store average

    // Ask user how many courses they have
    printf("How many Courses Offered to you: ");
    scanf("%d", &n);

    // Input marks for each course
    printf("Enter the Courses Marks:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &marks[i]);
    }

    // Calculate the sum of marks
    for(i = 0; i < n; i++){
        sum += marks[i];
    }

    // Calculate the average (typecast to float to avoid integer division)
    avg = (float)sum / n;

    // Display results
    printf("The sum is %d\n", sum);
    printf("The Average is %.2f", avg);

    return 0;   // Successful program execution
}

