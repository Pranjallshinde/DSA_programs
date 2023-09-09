/* Name-Pranjal Shinde
Roll No-56
SE-IT
Pid-8
*/

#include <stdio.h>

int areArraysIdentical(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0; // Arrays are not identical
        }
    }
    return 1; // Arrays are identical
}

int main() {
    int size;
    
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size];

    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    if (areArraysIdentical(array1, array2, size)) {
        printf("The arrays are identical.\n");
    } else {
        printf("The arrays are not identical.\n");
    }

    return 0;
}
