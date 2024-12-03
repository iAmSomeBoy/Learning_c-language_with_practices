#include <stdio.h>
#include <math.h>

// Function to calculate cosine series
double cosine_series(double x, int n) {
    double cos_x = 1.0; // Initialize the sum of series
    double term = 1.0;  // Term to hold each term of the series
    int sign = -1;      // Initialize sign for alternate terms

    for (int i = 1; i < n; i++) {
        term *= (x * x) / (2 * i * (2 * i - 1));
        cos_x += sign * term;
        sign = -sign;  // Alternate the sign
    }
    return cos_x;
}

int main() {
    double x;
    int n;

    // Input: Value of x and number of terms n
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms to be summed up: ");
    scanf("%d", &n);

    // Evaluate cosine using the series
    double result = cosine_series(x, n);
    printf("cos(%.2lf) = %.10lf\n", x, result);

    return 0;
}
