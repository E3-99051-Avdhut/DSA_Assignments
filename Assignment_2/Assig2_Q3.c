#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

typedef struct queue
{
	int arr[SIZE];
	int rear;
	int front;
	int count;
}queue_t;

void enqueue(queue_t *pq);
void dequeue(queue_t *pq);
void display(queue_t *pq);
void init_queue(queue_t *pq);

int main()
{
	queue_t Q;
	init_queue(&Q);
	int choice;

	do
	{
		printf("\n----------Circular Queue Menu----------\n");
		printf("0. Exit\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Display\n");

		printf("Enter your choice : ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 0 :
				exit(0);

			case 1 :
				enqueue(&Q);
				break;

			case 2 :
				dequeue(&Q);
				break;

			case 3 :
				display(&Q);
				break;

			case 4 :
				return 0;

			default :
				printf("\nInvalid choice.\n");
		}
	}while(choice != 0);
	return 0;
}

void init_queue(queue_t *pq)
{
	pq->rear = -1;
	pq->front = -1;
}

void enqueue(queue_t *pq, int value)
{
	if(pq->count == SIZE)
	{
		printf("\nCircular Queue is FULL.\n");
		return;
	}

	printf("\nEnter the element : ");
	scanf("%d", &value);

	pq->rear = (pq->rear + 1) % SIZE;
	pq->queue = [pq->rear] = value;
	pq->count++;

	printf("\n%d inserted successfully.\n", value);
}

void dequeue(queue_t *pq)
{
	if(pq->count == 0)
	{
		printf("\nCircular Queue is empty.\n");
		return;
	}

	printf("\nDeleted element : %d", pq->queue[pq->front]);

	pq->front = (pq->front + 1) % SIZE;
	pq->count--;
}

void display(queue_t pq*)
{
	int i, index;

	if(pq->count == 0)
	{
		printf("\nCircular Queue is empty.\n");
		return;
	}

	for(i = 0; i < pq->count; i++)
	{
		index = (pq->front + i) % SIZE;
		printf("%4d", pq->queue[index]);
	}
}




















