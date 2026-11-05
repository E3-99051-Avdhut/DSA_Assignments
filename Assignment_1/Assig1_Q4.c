#include<stdio.h>

#define SIZE 9

int nth_occurence(int arr[SIZE], int key, int n);

int main()
{
	int arr[SIZE] = {10, 20, 30, 20, 40, 20, 50, 20, 60};
	int key = 20;
	int n = 3;	// nth occurence

	printf("arr[] = {10, 20, 30, 20, 40, 20, 50, 20, 60}\n");

	int index = nth_occurence(arr, key, n);

	if(index != -1)
	{
		printf("%drd occurence found at index : %d\n", n, index);
	} 
	else
	{
		printf("%d occurence not found.\n", n);
	}
}

int nth_occurence(int arr[SIZE], int key, int n)
{
	int count = 0;

	for(int i = 0; i < SIZE; i++)
	{
		if(arr[i] == key)
		{
			count++;

			if(count == n)
				return i;
		}
	}
	return -1;
}










