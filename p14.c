/* Name-Pranjal Shinde
Roll No-56
SE-IT
Pid-14
*/

 //Array Implementation of Double Ended Queue

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int Queue[MAX_SIZE];
int front = -1, rear = -1;

void insertFront(int item) {
    if ((front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1)) {
        printf("Queue is full. Cannot insert.\n");
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = MAX_SIZE - 1;
    } else {
        front--;
    }
    Queue[front] = item;
    printf("%d inserted at front.\n", item);
}

void insertRear(int item) {
    if ((front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1)) {
        printf("Queue is full. Cannot insert.\n");
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (rear == MAX_SIZE - 1) {
        rear = 0;
    } else {
        rear++;
    }
    Queue[rear] = item;
    printf("%d inserted at rear.\n", item);
}

void deleteFront() {
    if (front == -1) {
        printf("Queue is empty. Cannot delete.\n");
        return;
    }
    printf("%d deleted from front.\n", Queue[front]);
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX_SIZE - 1) {
        front = 0;
    } else {
        front++;
    }
}

void deleteRear() {
    if (front == -1) {
        printf("Queue is empty. Cannot delete.\n");
        return;
    }
    printf("%d deleted from rear.\n", Queue[rear]);
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX_SIZE - 1;
    } else {
        rear--;
    }
}

void displayQueue() {
    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    if (front <= rear) {
        while (i <= rear) {
            printf("%d ", Queue[i]);
            i++;
        }
    } else {
        while (i < MAX_SIZE) {
            printf("%d ", Queue[i]);
            i++;
        }
        i = 0;
        while (i <= rear) {
            printf("%d ", Queue[i]);
            i++;
        }
    }
    printf("\n");
}

int main() {
    int choice, item;

    while (1) {
        printf("\n------ Double Ended Queue Operations ------\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at Rear\n");
        printf("3. Delete from Front\n");
        printf("4. Delete from Rear\n");
        printf("5. Display Queue\n");
        printf("6. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert at front: ");
                scanf("%d", &item);
                insertFront(item);
                break;
            case 2:
                printf("Enter element to insert at rear: ");
                scanf("%d", &item);
                insertRear(item);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                displayQueue();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}