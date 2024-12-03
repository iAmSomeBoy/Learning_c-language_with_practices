#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input: number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculating the sum of the sequence
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= 1.0 / i;  // Subtract if the term is even
        } else {
            sum += 1.0 / i;  // Add if the term is odd
        }
    }

    // Output: the result
    printf("Sum of the sequence up to %d terms is: %.6lf\n", n, sum);

    return 0;
}
