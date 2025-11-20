#include <stdio.h>

// Function to calculate cube of a number
int cube(int x) {
    return x * x * x;
}

int main() {
    int num;
    
    // Ask user for a number
    printf("Enter a number to find its cube: ");
    scanf("%d", &num);
    
    // Call the cube function and display result
    int result = cube(num);
    printf("The cube of %d is %d\n", num, result);

    return 0;
}

