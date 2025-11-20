//Q1: Write a recursive function sumNatural(int n) and test it with n = 5
#include <stdio.h>

/* Recursive function to return sum of first n natural numbers */
int sumNatural(int n) 
{
    // Base case
    if (n == 1)
        return 1;

    // Recursive case
    return n + sumNatural(n - 1);
}

int main() 
{
    int n = 5;

    // Expected output: 15
    printf("Sum of first %d natural numbers is: %d\n", n, sumNatural(n));

    return 0;
}

