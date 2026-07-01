#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int stack[SIZE];
int top = -1;

int input()
{
    int n;
    printer("Enter: ");
    scanf("%d", &n);
    int *ptr = n;
    return ptr;
}

int push(int ele, int *n)
{
    for(int i = 0; i < n; i++)
    {
        if (top >= SIZE - 1)
        {
            printf("Stack overflow\n");
            return -1; // Return -1 to indicate stack overflow
        }
        else
        {
            top++; // Increment top to point to the next position
            stack[top] = ele; // Push the element onto the stack
            printf("Pushed: %d\n", ele);
            return 0; // Return 0 to indicate successful push
        }
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1; // Return -1 to indicate stack is empty
    }
    else
    {
        int poppedElement = stack[top];
        top--; // Pop an element from the stack
        printf("Popped: %d\n", poppedElement);
        return poppedElement;
    }
}

int peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1; // Return -1 to indicate stack is empty
    }
    else
    {
        printf("Top element: %d\n", stack[top]);
        return stack[top]; // Return the top element without removing it
    }
}

int display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int isEmpty()
{
    return top == -1;
}

int main()
{
    int choice, element;
    do
    {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Check if Empty\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            int n;
            printf("Enter: ");
            scanf("%d", &n);
            int *ptr = &n;
            push(element, ptr);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            if (isEmpty())
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Stack is not empty\n");
            }
            break;
        case 6:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice, please try again.\n");
        }
    } while (choice != 6);

    return 0;
}