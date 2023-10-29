/*
Name = Pranjal Shinde
Roll No. = 56
SE-IT 
pid-22
*/

//Selection Sort
#include <stdio.h>
void SelectionSort(int arr[],int n)
{
    int i,j,temp,min;
    for(i=0;i<n-1;i++){
        min=i;
        for (j=i+1; j<n; j++) {
            if(arr[j]<arr[min]){
                min=j;
            }
        }
                temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
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
        printf("Enter the %d element of the array",k+1);
        scanf("%d",&arr[k]);
    }
    printf("Sorted Array:-\n");
    SelectionSort(arr,n);
    return 0;
}
