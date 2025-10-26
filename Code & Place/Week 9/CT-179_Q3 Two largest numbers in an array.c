//C program to find two largest numbers in an array
#include <stdio.h>
int main()
{
	int arr[100], n, i, largest, second;
	
	//Input size of array
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	//Input elements of array
	printf("Enter %d elements: ", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	//Intialize largest and second largest
	if(arr[0]>arr[1])
	{
		largest=arr[0];
		second=arr[0];
	}
	else
	{
		largest=arr[1];
		second=arr[0];
	}
	
	//Compare remaining elements
	for(i=2; i<n; i++)
	{
		if(arr[i]>largest)
		{
			second=largest;
			largest=arr[i];
		}
		else if(arr[i]>second && arr[i]!=largest)
		{
			second=arr[i];
		}
	}
	
	//Display the two largest numbers
	printf("Two largest numbers: %d %d", second, largest);
	return 0;
}
