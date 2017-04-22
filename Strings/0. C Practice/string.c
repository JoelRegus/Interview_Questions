#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

    char *hello = "Hello World";

    printf("%s has %lu characters.\n", hello, strlen(hello));
    return 0;
}
