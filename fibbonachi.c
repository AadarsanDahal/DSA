// 1.	Fibonacci Series
#include <stdio.h>
#include <conio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms, i;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Series: ");
        for (i = 0; i < terms; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

        printf("Program Made BY : Aadarsan Dahal\n");
    getch();
    return 0;
}

