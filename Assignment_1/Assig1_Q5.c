#include<stdio.h>

#define SIZE 11

int main()
{
	int arr[SIZE] = {1, 2, 3, -1, 2, 1, 0, 4, -1, 7, 8};
	int count;

	for(int i = 0; i < SIZE; i++)
	{
		count = 0;

		for(int j = 0; j < SIZE; j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
			}
		}

		if(count == 1)
		{
			printf("First non-repeating element : %d\n", arr[i]);
			return 0;
		}
	}
}









