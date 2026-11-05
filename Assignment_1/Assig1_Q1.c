#include<stdio.h>

#define SIZE 6

int last_occurence(int arr[SIZE], int key);

int main()
{
	int arr[SIZE] = {10, 20, 30, 20, 40, 20};
	int key = 20;

	int index = last_occurence(arr, key);

	if(index != -1)
		printf("Last occurence found at index : %d\n", index);
	else
		printf("Key not found.\n");

	return 0;
}

int last_occurence(int arr[SIZE], int key)
{
	int i;
	int index = -1;

	for(i = 0; i < SIZE; i++)
	{
		if(arr[i] == key)
			index = i;
	}
	return index;
}








