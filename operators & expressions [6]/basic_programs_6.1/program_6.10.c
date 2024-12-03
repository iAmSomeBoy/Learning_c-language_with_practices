#include <stdio.h>

int main(void) {
    printf("The number of Bytes occupied by:\n");
    printf("char = %d\n", (int)sizeof(char));
    printf("unsigned char = %d\n", (int)sizeof(unsigned char));
    printf("int = %d\n", (int)sizeof(int));
    printf("short int = %d\n", (int)sizeof(short int));
    printf("long int = %d\n", (int)sizeof(long int));
    printf("unsigned int = %d\n", (int)sizeof(unsigned int));
    printf("float = %d\n", (int)sizeof(float));
    printf("double = %d\n", (int)sizeof(double));
    printf("long double = %d\n", (int)sizeof(long double));
    return 0;
}