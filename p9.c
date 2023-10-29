/* Name-Pranjal Shinde
Roll No-56
SE-IT
Pid-9
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

    int count = 0;

    // Compare each element with the rest of the elements
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break; // Once a duplicate is found, break the inner loop
            }
        }
    }

    if (count > 0) {
        printf("Total number of duplicate elements in the array: %d\n", count);
    } else {
        printf("No duplicate elements found in the array.\n");
    }

    return 0;
}
