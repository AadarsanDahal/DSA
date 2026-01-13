#include <stdio.h>
#include <time.h>

// Function to find GCD using the iterative Euclidean Algorithm
int findGCD_Iterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find GCD using the recursive Euclidean Algorithm
int findGCD_Recursive(int a, int b) {
    if (b == 0)
        return a;
    else
        return findGCD_Recursive(b, a % b);
}

int main() {
    int num1, num2;
    int iterations = 1000000;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Convert to absolute values
    int a = num1 < 0 ? -num1 : num1;
    int b = num2 < 0 ? -num2 : num2;

    // Iterative
    clock_t start1 = clock();
    int result1 = 0;
    for (int i = 0; i < iterations; i++) {
        result1 = findGCD_Iterative(a, b);
    }
    clock_t end1 = clock();
    double time1 = ((double)(end1 - start1)) / CLOCKS_PER_SEC;

    // Recursive
    clock_t start2 = clock();
    int result2 = 0;
    for (int i = 0; i < iterations; i++) {
        result2 = findGCD_Recursive(a, b);
    }
    clock_t end2 = clock();
    double time2 = ((double)(end2 - start2)) / CLOCKS_PER_SEC;

    printf("\nGCD of %d and %d: %d\n\n", num1, num2, result1);
    printf("Iterative time: %.6f seconds\n", time1);
    printf("Recursive time: %.6f seconds\n", time2);

    return 0;
}
