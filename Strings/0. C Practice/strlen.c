#include <stdio.h>
#include <string.h>

size_t mystrlen(const char* str) {
    if (str == NULL) {
        return 0;
    }

    int i = 0;
    int len = 0;

    while (str[i] != '\0') {
        i++;
        len++;
    }

    return len;
}

int main(int argc, char **argv) {
    printf("%s has %lu characters.\n", argv[1], mystrlen(argv[1]));
    return 0;
}
