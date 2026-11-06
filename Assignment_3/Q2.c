#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value)
{
    if(top == SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

int pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

int main()
{
    int arr[SIZE] = {10, 20, 30, 40, 50};
    int i;

    // Push array elements into stack
    for(i = 0; i < SIZE; i++)
    {
        push(arr[i]);
    }

    // Pop elements and store back into array
    for(i = 0; i < SIZE; i++)
    {
        arr[i] = pop();
    }

    // Display reversed array
    printf("Reversed Array: ");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

