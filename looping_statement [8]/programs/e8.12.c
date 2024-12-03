#include <stdio.h>

// Function to evaluate exponential series
double exponential_series(double x, int n) {
    double sum = 1.0; // Initialize the sum of series
    double term = 1.0; // Term to hold each term of the series

    for (int i = 1; i <= n; i++) {
        term *= x / i; // Calculate each term
        sum += term; // Add the term to the sum
    }
    return sum;
}

int main() {
    double x;
    int n;

    // Input: Value of x and number of terms n
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms to be summed up: ");
    scanf("%d", &n);

    // Evaluate exponential using the series
    double result = exponential_series(x, n);
    printf("e^%.2lf = %.10lf\n", x, result);

    return 0;
}
