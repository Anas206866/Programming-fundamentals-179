//Q2: Declare an integer, float, and char.
#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5f;
    char c = 'A';

    int *pInt = &a;      // pointer to int
    float *pFloat = &b;  // pointer to float
    char *pChar = &c;    // pointer to char

    printf("Integer value using pointer: %d\n", *pInt);
    printf("Float value using pointer: %.2f\n", *pFloat);
    printf("Char value using pointer: %c\n", *pChar);

    return 0;
}

