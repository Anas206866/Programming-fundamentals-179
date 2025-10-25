#include <stdio.h>   
int main()
{
    int arr[5];  // Declare an integer array of size 5
    int i;       // Declare loop counter variable outside the loop (C90 compatible)

    // Prompt the user to enter 5 numbers
    printf("Please Enter 5 numbers:\n");

    // Loop to read 5 numbers from the user and store them in the array
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);  // Read each number and store it in arr[i]
    }

    // Print the numbers entered by the user
    printf("The numbers you entered are:\n");

    // Loop to display each number stored in the array
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);  // Print each number on a new line
    }
	return 0; 
}
