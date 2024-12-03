#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input: number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Initializing numerator and denominator
    int numerator = 1;
    int denominator = 3;

    // Calculating the sum of the sequence
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= (double) numerator / denominator;  // Subtract if term is even
        } else {
            sum += (double) numerator / denominator;  // Add if term is odd
        }

        // Update numerator and denominator for the next term
        numerator += 2;
        denominator += 4;
    }

    // Output: the result
    printf("Sum of the sequence up to %d terms is: %.6lf\n", n, sum);

    return 0;
}
