//Q3: Print array elements using a pointer (NO square brackets)
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    printf("Array elements using pointer: ");

    int i;                     
    for (i = 0; i < 5; i++) {  
        printf("%d ", *(p + i));
    }

    return 0;
}


