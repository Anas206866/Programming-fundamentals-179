//Bubble sort using pointers, descending order
#include <stdio.h>

// bubbleSort function that accepts a pointer and sorts in DESCENDING order
void bubbleSort(int *arr, int size) 
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++) 
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) < *(arr + j + 1)) 
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() 
{
    int arr[] = {10, 3, 25, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array:\n");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, size);

    printf("\n\nSorted array in DESCENDING order:\n");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

