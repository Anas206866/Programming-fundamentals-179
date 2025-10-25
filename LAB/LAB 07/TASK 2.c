#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;     // Variables for matrix dimensions
    int i, j, k;            // Loop control variables declared outside

    // Input dimensions of Matrix 1
    printf("Enter Rows of Matrix 1: ");
    scanf("%d", &r1);
    printf("Enter Columns of Matrix 1: ");
    scanf("%d", &c1);

    // Input dimensions of Matrix 2
    printf("Enter Rows of Matrix 2: ");
    scanf("%d", &r2);
    printf("Enter Columns of Matrix 2: ");
    scanf("%d", &c2);

    // Check if matrices can be multiplied (columns of 1st = rows of 2nd)
    if (c1 == r2)
    {
        int arr1[r1][c1];    // Matrix 1
        int arr2[r2][c2];    // Matrix 2
        int result[r1][c2];  // Resultant matrix

        // Input elements of Matrix 1
        printf("Enter the Elements of Matrix 1:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }

        // Input elements of Matrix 2
        printf("Enter the Elements of Matrix 2:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }

        // Matrix multiplication logic
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                result[i][j] = 0;  // Initialize element
                for (k = 0; k < c1; k++)
                {
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        // Print Resultant Matrix
        printf("\nResultant Matrix:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        // If multiplication is not possible
        printf("Invalid Matrices! Columns of Matrix 1 must equal Rows of Matrix 2.\n");
    }
	return 0;
}

