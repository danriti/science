#include <stdlib.h>
#include <stdio.h>

void swap_int() {
    int a = 5;
    int b = 10;

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
}

int main(int argc, char **argv) {

    printf("Swap!\n");

    swap_int();

	return 0;
}

