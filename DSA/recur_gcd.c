#include <stdio.h>
#include <time.h>

// Recursive function to find GCD
int findGCD(int a, int b) {
    // Base case: if b is 0, the GCD is a
    if (b == 0) {
        return a;
    }
    // Recursive step: call the function with (b, a % b)
    return findGCD(b, a % b);
}

int main() {
    int num1 = 480, num2 = 188;
    
    // Start timing
    clock_t start = clock();
    
    // It's good practice to pass absolute values
    int result = findGCD(num1, num2);
    
    // End timing
    clock_t end = clock();
    
    // Calculate execution time in seconds
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);
    printf("Execution time: %f seconds\n", time_taken);
    
    return 0;
}