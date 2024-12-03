#include <stdio.h>

int main(void) {
    int a, b, c;
    int x = 2, y = 1, t;
    a = (b = 3, c = b + 2);
    printf("a = %d\n", a);
    t = x, x = y, y = t;
    printf("x = %d y = %d\n", x, y);
    return 0;
}