/* Name-Pranjal Shinde
Roll No-56
SE-IT
Pid-4
*/

#include<stdio.h>
#include<string.h>

struct student
{
    int rollNo;
    char name[20];
    float per;
}std[5];

void main()
{
    for(int i=0; i<5; i++)
    {
        printf("enter the details of %d th student\n", i+1);
        printf("enter the roll no.: ");
        scanf("%d", &std[i].rollNo);
        printf("enter the name: ");
        scanf("%s", std[i].name);
        printf("enter the percentage.: ");
        scanf("%f", &std[i].per);
        printf("\n");
    }

    for(int i=0; i<5; i++) // for descending order
    {
             float max=std[i].per;
        int idx=i;
        for(int j=i; j<5; j++)
        {
            if(max<std[j].per)
            {
                /*saving the max*/
                max=std[j].per;
                idx=j;
            }
        }
        /*swap*/
        int num=std[idx].rollNo;
        std[idx].rollNo=std[i].rollNo;
        std[i].rollNo=num;
        char temp[20];
        strcpy(temp,std[idx].name);
        strcpy(std[idx].name,std[i].name);
        strcpy(std[i].name,temp);
        std[idx].per=std[i].per;
        std[i].per=max;
    }

      printf("\n\n\n\n");
    for(int i=0; i<5; i++)
    {
        printf("the details of %d th student\n", i+1);
        printf("the roll no.: ");
        printf("%d\n", std[i].rollNo);
        printf("the name: ");
        printf("%s\n", std[i].name);
        printf("enter the percentage.: ");
        printf("%f\n", std[i].per);
        printf("\n");
    }

}/*end of main*/
