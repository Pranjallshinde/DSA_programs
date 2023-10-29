/*
Name = Pranjal Shinde
Roll No. = 56
SE-IT 
p-20
*/
#include<stdio.h>
#include<stdlib.h>

int cntr=0;

struct node{
    int data;
    int priority;
    struct node* next;
};
struct node* front=NULL;

struct node* createNode();
void state();
void insert();
void delete();
void display();
void count();

void main()
{
    int choice,loopexit;
    LABEL:
    while(1)
    {
        printf("\n1. Check the state of Priority Queue");
        printf("\n2. Insert element into the Priority Queue");
        printf("\n3. Delete element form the Priority Queue");
        printf("\n4. Display elements of the Priority Queue");
        printf("\n5. Count the elements of the Priority Queue");
        printf("\nSelect option: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                state();
                break;
            
            case 2:
                insert();
                break;
            
            case 3:
                delete();
                break;
            
            case 4:
                display();
                break;
            
            case 5:
                count();
                break;
                    
            default:
                break;
        }
        printf("\nDo you want to exit(1/0): ");
        scanf("%d",&loopexit);
        
        if(loopexit==0)
            goto LABEL;
        else 
            break;
    }
}

struct node* createNode()
{
    return (struct node*) malloc(sizeof(struct node));
}

void state()
{
    if(front==NULL)
        printf("\nPriority Queue is empty!");
    else  
        printf("\nPriority Queue is not empty");
}

void insert()
{
    int x,y;
    struct node* newnode;
    newnode=createNode();

    if(newnode==NULL)
        printf("\nPriorityQueueOverflow!");
    else
    {
        printf("\nEnter element to be inserted: ");
        scanf("%d",&x);
        printf("\nEnter priority for this element: ");
        scanf("%d",&y);
        newnode->data=x;
        newnode->priority=y;

        if(front==NULL||newnode->priority<=front->priority)
        {
            newnode->next=front;
            front=newnode;
            cntr++;
        }
        else
        {
            struct node* temp=front;
            while(temp->next!=NULL&&temp->next->priority<=newnode->priority)
                temp=temp->next;
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }
}

void delete()
{
    if(front==NULL)
        printf("\nPriority Queue is empty!");
    else
    {
        printf("\nDeleted element: %d",front->data);
        printf("\nPriority: %d",front->priority);
        front=front->next;
        cntr--;
    }
}

void display()
{
    if(front==NULL)
        printf("\nPriority Queue is empty!");
    else
    {
        struct node* temp=front;
        printf("\nElements of Priority Queue are: ");
        while(temp!=NULL)
        {
            printf("\nelement:%d priority:%d",temp->data,temp->priority);
            temp=temp->next;
        }
    }
}

void count()
{
    if(front==NULL)
        printf("\nPriority Queue is empty!");
    else
        printf("Number of elements in Priority Queue: %d",cntr);
}