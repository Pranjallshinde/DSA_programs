/*
Name = Pranjal Shinde
Roll No. = 56
SE-IT 
pid-24
*/


//Merge Sort
#include <stdio.h>
void Merge(int arr[],int low,int mid,int high)
{
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    int b[100];
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
            k++;
        }
        else{
            b[k]=arr[j];
            j++;
            k++;
        }
    }

    while(i<=mid){
        b[k]=arr[i];
        i++;
        k++;
    }

    while(j<=high){
        b[k]=arr[j];
        j++;
        k++;
    }

    for (int l = low; l <=high ; ++l) {
        arr[l]=b[l];
    }

}

void MergeSort(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
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
    MergeSort(arr,0,n-1);
    for (int k = 0; k<n ; ++k) {
        printf("%d\n",arr[k]);
    }
    return 0;
}