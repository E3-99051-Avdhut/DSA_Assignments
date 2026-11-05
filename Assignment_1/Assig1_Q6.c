#include<stdio.h>

#define SIZE 7

int find_rank(int arr[SIZE], int x);

int main()
{
	int arr[SIZE] = {10, 20, 15, 3, 4, 4, 1};
	int x = 4;

	int rank = find_rank(arr, x);

	printf("Rank of %d is : %d\n", x, rank);

	return 0;
}

int find_rank(int arr[SIZE], int x)
{
	int count = 0;

	for(int i = 0; i < SIZE; i++)
	{
		if(arr[i] <= 4)
		{
			count++;
		}
	}
	return count;
}







