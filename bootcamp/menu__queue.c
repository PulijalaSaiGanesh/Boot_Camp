#include <stdio.h>

int main()
{
    int queue[5];
    int front = -1, rear = -1;
    int choice, element;

    do
    {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (rear >= 4)
            {
                printf("Queue overflow\n");
            }
            else
            {
                printf("Enter: ");
                scanf("%d", &element);
                rear++;
                queue[rear] = element;
                if (front == -1)
                    front = 0; // Set front to 0 when the first element is enqueued
                printf("Enqueued: %d\n", element);
            }
            break;
        case 2:
            if (front == -1 || front > rear)
            {
                printf("Queue underflow\n");
            }
            else
            {
                int dequeuedElement = queue[front];
                front++;
                printf("Dequeued: %d\n", dequeuedElement);
            }
            break;
        case 3:
            if (front == -1 || front > rear)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Queue elements: ");
                for (int i = front; i <= rear; i++)
                {
                    printf("%d ", queue[i]);
                }
                printf("\n");
            }
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}