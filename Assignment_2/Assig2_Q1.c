#include<stdio.h>

#define SIZE 6

void display(int arr[SIZE]);
void insertion_sort(int arr[SIZE]);

int main()
{
	int arr[SIZE] = {55, 44, 66, 11, 33};

	printf("Before sorting :\n");
	display(arr);

	insertion_sort(arr);

	printf("After sorting (Descending order):\n");
	display(arr);

	return 0;
}

void display(int arr[SIZE])
{
	for(int i = 0; i < SIZE; i++)
	{
		printf("%4d", arr[i]);
	}
	printf("\n");
}

void insertion_sort(int arr[SIZE])
{
	int i, j, key;

	for(i = 1; i < SIZE; i++)
	{
		key = arr[i];
		for(j = i-1; j >= 0 && key > arr[j]; j--)
		{
			// Shift arr[j] one index ahead
			arr[j+1] = arr[j];
		}
		// Copy the key back to the array
		arr[j+1] = key;
	}	
}







