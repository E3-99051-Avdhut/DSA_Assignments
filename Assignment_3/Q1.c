
#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = SIZE;

void push(int value)
{
    if(top == 0)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top--;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

void pop()
{
    if(top == SIZE)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Popped element = %d\n", stack[top]);
        top++;
    }
}

void display()
{
    int i;

    if(top == SIZE)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack elements are:\n");

        for(i = top; i < SIZE; i++)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice, value;

    while(1)
    {
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

