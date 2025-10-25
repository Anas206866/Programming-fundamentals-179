#include <stdio.h>   
int main()         
{
    // Display the purpose of the program
    printf("Find Whether the Given Number is Positive, Negative or Zero (Neutral)\n");

    int num;  // Declare an integer variable to store the user's input

    // Ask the user to enter a number
    printf("Enter the Number: ");
    scanf("%d", &num);  // Read and store the entered number from the user

    // Use the conditional (ternary) operator to check and print the result
    // The ternary operator works like:
    // (condition) ? expression_if_true : expression_if_false
    // Here, it checks:
    // 1. If num > 0 ? print "Number is Positive"
    // 2. Else, if num < 0 ? print "Number is Negative"
    // 3. Else ? print "Number is Zero (Neutral)"
    (num > 0) ? printf("Number is Positive") :(num < 0) ? printf("Number is Negative") :printf("Number is Zero (Neutral)");
	return 0; 
}

