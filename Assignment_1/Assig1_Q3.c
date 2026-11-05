#include<stdio.h>

#define SIZE 6

int binary_search(int arr[SIZE], int key);
int comparisons = 0;

int main()
{
	int arr[SIZE] = {90, 80, 70, 60, 50, 40};	// Descending order
	//int arr[SIZE] = {11, 22, 33, 44, 55, 66};	// Ascending order
	int key;

	printf("Enter the key : ");
	scanf("%d", &key);

	int index = binary_search(arr, key);

	if(index != -1)
		printf("Key found at index : %d\n", index);
	else
		printf("Key not found.\n");

	printf("Comparisons = %d\n", comparisons);

	return 0;
}

int binary_search(int arr[SIZE], int key)
{
	int left = 0;
	int right = SIZE-1;
	int mid;

	while(left <= right)
	{
		mid = (left + right) / 2;

		comparisons++;
		if(key == arr[mid])
		{
			return mid;
		}
		else if(key < arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;
}












