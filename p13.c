/* Name-Pranjal Shinde
Roll No-56
SE-IT
Pid-13
*/

/*Array Implementation of Circular  Queue*/

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#define size 5

int queue[size];
int front,rear;

void init();
void enqueue(int);
void dequeue();
void display();

void init()
{
	front=-1;
	rear=-1;
}

void enqueue(int x)
{

	if (front==0 && rear==size-1 || front==rear+1)  // CQ is full
			printf("\n Queue Overflow");
	else
  {
    if (front==-1 && rear==-1)        //CQ is empty
    {
	    front=0;rear=0;
    }
		else
	  {
			rear=(rear+1)%size;
		}

			queue[rear]=x;
		//	 printf("\n ==>Front = %d and Rear=%d",front,rear);
	}

}

void dequeue()
{
    if(rear==-1 && front==-1)
				printf("\n Circular Queue Underflow/Empty");
    else if(rear==front)
	    {
				printf("\n %d deleted",queue[front]);
				rear=-1;
				front=-1;
	    }
	 	else
	    {
	      printf("\n %d deleted",queue[front]);
	      front=(front+1)%size;
	    }

}

void display()
{
  int i;
  if(rear==-1 && front==-1)
		printf("\n Queue Underflow");
  else
	{ 
		i=front;

	 	while(i!=rear)
		{
	    printf("\n %d ",queue[i]);
			i=(i+1)%size;
		}
		printf("\n %d",queue[i]);
	}
}



void main()
{
int ch;
int x;
init();

while(1)
{
//clrscr();
printf("\nCircular Queue Operation");
printf("\n1. Enqueue element ");
printf("\n2. Dequeue element ");
printf("\n3. Display the Queue elements");
printf("\n4. Exit");
printf("\n Enter your choice:");
scanf("%d",&ch);

switch(ch)
{
case 1: printf("\n Enter the element to be enqueued:");
	scanf("%d",&x);
	enqueue(x);
	break;

case 2: dequeue();
	//		getch();
			break;

case 3: display();
		//	getch();
			break;
case 4: printf("\n Exiting the program");
		exit(1);
default: printf("\n Wrong Choice");
			break;

}
}
}