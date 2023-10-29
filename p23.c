/*
Name = Pranjal Shinde
Roll No. = 56
SE-IT 
pid-23
*/


//insertion Sort
#include <stdio.h>
void InsertionSort(int arr[],int n)
{
    int j,key;

    for(int i=1;i<=n-1;i++){
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    InsertionSort(arr,n);
    return 0;
}

