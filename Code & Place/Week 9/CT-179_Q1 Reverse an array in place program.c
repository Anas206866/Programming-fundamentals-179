// C program to reverse an array in place
#include<stdio.h>
int main()
{
	int arr[100], n, i, temp;
	
	//Input size of array
	printf("Enter size of array : ");
	scanf("%d", &n);
	
	//Input elements of array
	printf("Enter %d elements: ", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	//Reverse the array by swapping elements
	for(i=0 ; i<n/2; i++)
	{
		temp=arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
	}
	
	//Output the reverse array
	printf("Reversed array: ");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
