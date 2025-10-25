#include <stdio.h>
int main()
{
   int r, c, i, j, k, l, max = 0;  // r, c for matrix dimensions; i,j,k,l for loops; max for storing the maximum element

   // Display a message about the program’s purpose
   printf("Find Maximum Element Of Matrix!!!\n");

   // Input number of rows
   printf("Enter No of Rows: ");
   scanf("%d", &r);

   // Input number of columns
   printf("Enter No of Cols: ");
   scanf("%d", &c);

   // Declare a 2D array (matrix) of size r x c
   int arr[r][c];

   // Input matrix elements from the user
   // Also find the maximum element while reading input
   printf("\nEnter the elements of the matrix:\n");
   for (i = 0; i < r; i++)
   {
      for (j = 0; j < c; j++)
      {
         scanf("%d", &arr[i][j]);   // Read each element
         
         // Compare current element with max
         // If greater, update max
         if (arr[i][j] > max)
            max = arr[i][j];
      }
   }

   // Display the entered matrix
   printf("\nEntered Matrix:\n");
   for (k = 0; k < r; k++)
   {
      for (l = 0; l < c; l++)
      {
         printf("%d ", arr[k][l]);  // Print each element in the matrix
      }
      printf("\n");  // New line after each row
   }

   // Display the maximum element found
   printf("\nThe Maximum Element of the given Matrix is %d", max);
   return 0;  
}

