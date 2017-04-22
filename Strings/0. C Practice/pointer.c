#include <stdio.h>

int main(int argc, char **argv) {
    int x = 10;
    int *x_ptr = &x;

    *x_ptr = 20;
    printf("x = %i\n", x);

    return 0;
}
