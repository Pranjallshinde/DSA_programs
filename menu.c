/* Name-Pranjal Shinde
Roll No-56
SE-IT
Pid-6
*/






include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int size = 0;

    while (1) {
        int choice;
        printf("\nMenu:\n");
        printf("1. INSERT\n");
        printf("2. DELETE\n");
        printf("3. TRAVERSE\n");
        printf("4. SEARCH\n");
        printf("5. EXIT\n");
        printf("Enter your choice (1/2/3/4/5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (size < MAX_SIZE) {
                    int element;
                    printf("Enter the element to insert: ");
                    scanf("%d", &element);
                    array[size++] = element;
                    printf("%d has been inserted into the array.\n", element);
                } else {
                    printf("Array is full. Cannot insert more elements.\n");
                }
                break;

            case 2:
                if (size > 0) {
                    int element, found = 0;
                    printf("Enter the element to delete: ");
                    scanf("%d", &element);
                    for (int i = 0; i < size; i++) {
                        if (array[i] == element) {
                            found = 1;
                            for (int j = i; j < size - 1; j++) {
                                array[j] = array[j + 1];
                            }
                            size--;
                            printf("%d has been deleted from the array.\n", element);
                            break;
                        }
                    }
                    if (!found) {
                        printf("%d not found in the array.\n", element);
                    }
                } else {
                    printf("Array is empty. Nothing to delete.\n");
                }
                break;

            case 3:
                if (size > 0) {
                    printf("Array elements:\n");
                    for (int i = 0; i < size; i++) {
                        printf("%d ", array[i]);
                    }
                    printf("\n");
                } else {
                    printf("Array is empty.\n");
                }
                break;

            case 4:
                if (size > 0) {
                    int element, found = 0;
                    printf("Enter the element to search: ");
                    scanf("%d", &element);
                    for (int i = 0; i < size; i++) {
                        if (array[i] == element) {
                            found = 1;
                            printf("%d found in the array.\n", element);
                            break;
                        }
                    }
                    if (!found) {
                        printf("%d not found in the array.\n", element);
                    }
                } else {
                    printf("Array is empty. Nothing to search for.\n");
                }
                break;

            case 5:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
