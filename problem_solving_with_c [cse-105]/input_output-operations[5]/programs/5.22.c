#include <stdio.h>

int main() {
    int int1, int2;
    double double1, double2;

    // Accept two integers
    printf("Enter two integers: ");
    scanf("%d %d", &int1, &int2);

    // Accept two double values
    printf("Enter two double values: ");
    scanf("%lf %lf", &double1, &double2);

    // Displaying with formatting
    printf("\nFormatted Output:\n");
    printf("%-10d %-10d\n", int1, int2);           // Left justified integers
    printf("%10.2f %10.2f\n", double1, double2);    // Right justified doubles with 2 decimal places

    return 0;
}
