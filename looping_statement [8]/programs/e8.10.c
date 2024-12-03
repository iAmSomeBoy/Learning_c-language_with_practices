#include <stdio.h>
#include <math.h>

// Function to calculate factorial of a number
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double x, sum = 0.0;
    int n;

    // Input: value of x and number of terms
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate sine series
    for (int i = 0; i < n; i++) {
        int power = 2 * i + 1;
        double term = pow(x, power) / factorial(power);

        // Alternating sign for each term
        if (i % 2 == 0) {
            sum += term;
        } else {
            sum -= term;
        }
    }

    // Output: the result
    printf("sin(%.2lf) calculated using %d terms is: %.6lf\n", x, n, sum);

    return 0;
}
