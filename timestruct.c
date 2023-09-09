/* Name-Pranjal Shinde
Roll No-56
SE-IT
Pid-7
*/

#include<stdio.h>

struct time
{
    int hr;
    int min;
    int sec;
};

void main()
{
    /*input of first time*/
    struct time t1;
    printf("enter 1st time values:\n");
    printf("enter the hours: ");
    scanf("%d", &t1.hr);
    printf("enter the minutes: ");
    scanf("%d", &t1.min);
    printf("enter the seconds: ");
    scanf("%d", &t1.sec);
    printf("\n\n");

    /*input of second time*/
    struct time t2;
    printf("enter 2nd time values:\n");
    printf("enter the hours: ");
    scanf("%d", &t2.hr);
    printf("enter the minutes: ");
    scanf("%d", &t2.min);
    printf("enter the seconds: ");
    scanf("%d", &t2.sec);
    printf("\n\n");

   
      t1.sec+=t2.sec;
    if(t1.sec>60)
    {
        t1.sec-=60;
        t1.min++;
    }
   
    t1.min+=t2.min;
    if(t1.min>60)
    {
        t1.min-=60;
        t1.hr++;
    }
   
    t1.hr+=t2.hr;
    if(t1.hr>24)
    {
        t1.hr-=24;
    }

    /*printing the addition of time*/
    printf("\n\n");
    printf("Addition of times gives:\n")
    printf("hours: ");
    printf("%d\n", t1.hr);
    printf("minutes: ");
    printf("%d\n", t1.min);
    printf("seconds: ");
    printf("%d\n", t1.sec);
}