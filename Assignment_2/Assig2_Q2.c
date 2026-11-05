#include<stdio.h>

#define SIZE 5

void enqueue();
void dequeue();
void display();

int arr[SIZE];
int front = 0, rear = 0;

int main()
{
	int choice;

	while(1)
	{
		printf("\n----------Linear Queue Menu----------\n");
		printf("0. Exit\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Display\n");

		printf("Enter your choice : ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 0 :
				return 0;

			case 1 :
				enqueue();
				break;

			case 2 :
				dequeue();
				break;

			case 3 :
				display();
				break;

			default :
				printf("Invalid choice.\n");
		}
	}

	return 0;
}

void enqueue()
{
	int num;

	if(rear == SIZE)
	{
		printf("Queue is full.\n");
	}
	else
	{
		printf("Enter number : ");
		scanf("%d", &num);

		arr[rear] = num;
		rear++;

		printf("Element inserted succesfully.\n");
	}
}

void dequeue()
{
	if(front == rear)
	{
		printf("Queue is Empty.\n");
	}
	else
	{
		printf("Deleted element : %d\n", arr[front]);
		front++;
	}
}

void display()
{
	if(front == rear)
	{
		printf("Queue is Empty.\n");
	}
	else
	{
		printf("Queue elements : ");

		for(int i = front; i < rear; i++)
		{
			printf("%4d", arr[i]);
		}

		printf("\n");
	}
}










