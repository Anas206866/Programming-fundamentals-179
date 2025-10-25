#include <stdio.h>
int main()
{
    int r, c;  // Variables to store number of rows and columns

    // Ask the user for matrix dimensions
    printf("Enter No of Rows: ");
    scanf("%d", &r);
    printf("Enter No of Cols: ");
    scanf("%d", &c);

    // Declare 2D arrays (matrices)
    int arr[r][c];         // Original matrix
    int transpose[c][r];   // Transposed matrix

    int i, j;  // Loop control variables

    // Input elements of the matrix
    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Compute the transpose of the matrix
    // Transpose: element at position [i][j] becomes [j][i]
    int k, l;
    for (k = 0; k < c; k++)
    {
        for (l = 0; l < r; l++)
        {
            transpose[k][l] = arr[l][k];
        }
    }

    // Display the transposed matrix
    printf("\nTranspose of the given matrix:\n");
    int m, n;
    for (m = 0; m < c; m++)
    {
        for (n = 0; n < r; n++)
        {
            printf("%d ", transpose[m][n]);
        }
        printf("\n");  // Move to next row
    }
	return 0;  
}

