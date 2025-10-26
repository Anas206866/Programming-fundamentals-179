//C program to count even numbers in an array
#include <stdio.h>
int main()
{
	int arr[100], n, i, count=0;
	
	//Input elements of array
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	//Input elements of array
	printf("Enter %d elements: ", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	//Count how many numbers are even
	for(i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			count++;
		}
	}
	
	//Display total even numbers
	printf("Number of even elements: %d", count);
	return 0;
}

