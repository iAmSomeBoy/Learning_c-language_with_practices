#include <stdio.h>

int main() {
    int a, b, c, d, e;
    a = b = c = d = e = 10;
    printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);

    a += 5;
    b -= 5;
    c *= 5;
    d /= 5;
    e %= 5;

    printf("a += 5\t a = %d\n", a);
    printf("b -= 5\t b = %d\n", b);
    printf("c *= 5\t c = %d\n", c);
    printf("d /= 5\t d = %d\n", d);
    printf("e %%= 5\t e = %d\n", e);

    return 0;
}