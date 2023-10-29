/* Name-Pranjal Shinde
Roll No-56
SE-IT
Pid-3
*/

#include<stdio.h>

struct student
{
    char name[30];
    int roll;
    float percentage;
};

int main()
{

 struct student s[5], temp;
 int i,j,n;
 
 printf("Enter n:\n");
 scanf("%d",&n);

 for(i=0;i< n;i++)
 {
    printf("Enter name, roll and percentage of student:\n");
    scanf("%s%d%f",s[i].name, &s[i].roll, &s[i].percentage);
 }

 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(s[i].roll>s[j].roll)
   {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
   }
  }
 }

 printf("Sorted records are:\n");

 for(i=0;i< n;i++)
 {
    printf("Name: %s\n", s[i].name);
    printf("Roll: %d\n", s[i].roll);
    printf("Percentage: %0.2f\n\n", s[i].percentage);
 }

 return 0;
}
