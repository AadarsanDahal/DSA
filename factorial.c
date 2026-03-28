// 2.	Factorial
#include <stdio.h>
#include <conio.h>

// Recursive function
int findFactorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * findFactorial(n - 1);
    }
}

int main() {
    int n, result;

    printf("Enter a small positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        result = findFactorial(n);
        printf("Factorial of %d = %d\n", n, result);
    }
    printf("Program Made BY : Aadarsan Dahal\n");
    
    getch();
    return 0;
}

