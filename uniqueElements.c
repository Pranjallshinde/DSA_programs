/* Name-Pranjal Shinde
Roll No-56
SE-IT
Pid-10
*/

#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in the array:\n");

    // Loop through the array
    for (int i = 0; i < size; i++) {
        int isUnique = 1;

        // Check if arr[i] is unique by comparing it with previous elements
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0; // Not unique, break the inner loop
                break;
            }
        }

        // If arr[i] is unique, print it
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}
