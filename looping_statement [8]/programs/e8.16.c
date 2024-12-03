#include <stdio.h>

int main() {
    int i, j, k, n = 4;

    for (i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print descending numbers
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        // Print ascending numbers
        for (k = 2; k <= i; k++) {
            printf("%d ", k);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
