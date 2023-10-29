/*
Name = Pranjal Shinde
Roll No. = 56
SE-IT 
p-21
*/


//Bubble Sort
#include <stdio.h>
void BubbleSort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for (int j = 0; j <n-1-i ; j++) {
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int k = 0; k <n ; ++k) {
        printf("%d\n",arr[k]);
    }
}
int main() {
    int n;
    printf("Enter the size of the array:-");
    scanf("%d",&n);
    int arr[n];
    for (int k = 0; k <n ; ++k) {
        printf("Enter the %d element of the array:-",k+1);
        scanf("%d",&arr[k]);
    }
    printf("Sorted Array:-\n");
    BubbleSort(arr,n);
    return 0;
}