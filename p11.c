/* Name-Pranjal Shinde
Roll No-56
SE-IT
Pid-11
*/

//array implementation on stack
#include<stdio.h>
#include<stdlib.h>

int stack[5];
int top=-1;

void push();
void pop();
void display();

void main()
{
    int ch;
    int n1;

    while(1)
    {
        printf("Stack Operation");
        printf("\n1. Push an element into the stack");
        printf("\n2. Pop out the elemnt from the statck");
        printf("\n3. Display The stack element");
        printf("\n4. Exit");

        printf("\n Enter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: printf("\n Enter the element to be pushed into the stack: ");
                    scanf("%d",&n1);
                    push(n1);
                    break;

            case 2:pop();
                   break;

            case 3:display();
                   break;

            case 4:exit(1);

            default : printf("Wrong chooice");
            break;
        }
    }
}

void push(int x)
{
    if(top==4)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{   
    int a;
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        a=stack[top];
        top--;
        printf("\n %d Element popped out of the stack ",a);

    }
}

void display()
{
    int i;
    if(top==-1)
        printf("Stack is empty");
    else
    {
        printf("\n Elements in the stack are");
        for(i=top;i>=0;i--)
        {
            printf("\n %d\n",stack[i]);
        }
    }
}