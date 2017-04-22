#include <stdio.h>
#include <string.h>

char * mystrchr(char* str, char *c) {
    if (str == NULL || !c) {
        return 0;
    }

    char *curr = str;

    while (curr != '\0') {
        if (*curr == *c) {
            return curr;
        }

        curr++;
    }

    return NULL;
}

int main(int argc, char **argv) {
    printf("The character %s can be found at adress %p in %s\n",
            argv[2], mystrchr(argv[1], argv[2]), argv[1]);
    return 0;
}
