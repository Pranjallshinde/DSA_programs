/* Name-Pranjal Shinde
Roll No-56
SE-IT
Pid-15
*/

//Program to implement insert, delete, display, search in linked list

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};
struct Node *list=0;
// Function to create a new node
struct Node* createNode(void) {
    return ((struct Node*)malloc(sizeof(struct Node)));
}
// Function to insert a node at the beginning of the linked list
void  insertAtBeginning( int data) {
    struct Node* newNode = createNode();
    newNode->data = data;
    newNode->next = list;
    list = newNode;
}
// Function to insert a node at the end of the linked list
void insertAtEnd(int data) {
    struct Node* newNode = createNode();
    struct Node* temp;
    if (list == NULL) {
        insertAtBeginning(data);
    }
    else{
        newNode->data=data;
        newNode->next=NULL;
        temp=list;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
// Function to insert a node at a given location in the linked list
void insertAtLocation(int data, int location) {
    if (location == 0 || list ==0) {
        insertAtBeginning(data);
    }
    else{
    struct Node* newNode = createNode();
        struct Node* temp;
        temp=list;
        for (int i = 1; i <location-1 ; i++) {
        temp = temp->next;
        }
    newNode->data=data;
    newNode->next = temp->next;
    temp->next = newNode;
    }
}
// Function to delete a node at the beginning of the linked list
void deleteAtBeginning() {
    if (list == NULL) {
        printf("List is empty!\n");
        return;
    } else {
        struct Node *temp = list;
        list = list->next;
        free(temp);
    }
}
// Function to delete a node at the end of the linked list
void deleteAtEnd() {
    if (list == NULL) {
        printf("List is empty!\n");
        return;
    }
    else{
    struct Node* temp ;
    struct Node* t2 ;
    temp=list;
    while (temp->next!= NULL) {
        t2=temp;
        temp = temp->next;
    }
    t2->next = NULL;
    free(temp);}
}
// Function to delete a node at a given location in the linked list
void deleteAtLocation( int location) {
    if (list == NULL) {
        printf("List is empty!\n");
        return;
    }
    if (location == 1) {
        list=list->next;
    }
    else{
    struct Node* temp;
    struct Node*  t2;
    temp=list;
        for (int i = 1; i <location-1 ; i++) {
            temp=temp->next;
        }
        t2=temp->next;
        temp->next=t2->next;
        free(t2);
    }
}
// Function to display the linked list
void display() {
    struct Node* temp;
    temp=list;
    if(temp==0){
        printf("The List Is Empty");
    } else{
    printf("Linked List: ");
    while (temp!= NULL) {
        printf("%d\n ", temp->data);
        temp = temp->next;
    }
    }
}
int main() {
    int choice, data, location;
    while (1) {
        printf("\nLinked List Operations:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at location\n");
        printf("4. Delete at beginning\n");
        printf("5. Delete at end\n");
        printf("6. Delete at location\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;
            case 2:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(data);
                break;
            case 3:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter location to insert: ");
                scanf("%d", &location);
                insertAtLocation(data, location);
                break;
            case 4:
                deleteAtBeginning();
                break;
            case 5:
                deleteAtEnd();
                break;
            case 6:
                printf("Enter location to delete: ");
                scanf("%d", &location);
                deleteAtLocation(location);
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}