/*
Name = Pranjal Shinde
Roll No. = 56
SE-IT 
pid-25
*/


//QuickSort
#include <stdio.h>
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            temp= arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    } while (i<j);
        temp=arr[low];
        arr[low]=arr[j];
        arr[j]=temp;
        return j;

}
void QuickSort(int arr[],int low,int high)
{       int partitionIndex;
        if(low<high) {
            partitionIndex=partition(arr, low, high);
            QuickSort(arr, low, partitionIndex - 1);
            QuickSort(arr, partitionIndex + 1, high);
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
    QuickSort(arr,0,n-1);
    for (int k = 0; k<n ; ++k) {
        printf("%d\n",arr[k]);
    }
    return 0;
}

