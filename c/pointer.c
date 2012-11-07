#include <stdlib.h>
#include <stdio.h>

void int_pointer() {
    /* Declare some variables. */
    int a = 5;
    int b = 10;

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    /* Create a pointer and reference (&) it to the address of a. */
    int *p = &a;

    /* Print the value pointed (indirection) to by p. */
    printf("p1: %d\n", *p);
    printf("p2: %d\n", *(&b));
}

int main(int argc, char **argv) {

    printf("Pointers!\n");

    int_pointer();

	return 0;
}

