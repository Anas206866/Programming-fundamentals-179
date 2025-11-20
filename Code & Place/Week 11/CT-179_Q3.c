#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    // Before swapping
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call the swap function
    swap(&x, &y);

    // After swapping
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

