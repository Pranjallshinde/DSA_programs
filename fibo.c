/* Name-Pranjal Shinde
Roll No-56
SE-IT
*/

#include <stdio.h>

// Function to check if a number is a Fibonacci number
int isFibonacci(int num) {
    int a = 0, b = 1;

    while (b < num) {
        int temp = a;
        a = b;
        b = temp + b;
    }

    return (b == num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isFibonacci(num)) {
        printf("%d is a part of the Fibonacci series.\n", num);
    } else {
        printf("%d is not a part of the Fibonacci series.\n", num);
    }

    return 0;
}


