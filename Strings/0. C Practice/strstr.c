#include <stdio.h>
#include <string.h>

char * strstr(const char *haystack, const char *needle) {
    if (haystack == NULL || needle == NULL) {
        return NULL;
    }

    int needleLen = strlen(needle);
    int haystackLen = strlen(haystack);

    if (needleLen > haystackLen) {
        return NULL;
    }

    int counter = 0;
    const char * start = NULL;

    while (*haystack != '\0') {
        if (*haystack == *needle) {
            if (start == NULL) {
                start = haystack;
            }

            counter++;
            needle++;
        } else {
            start = NULL;
            needle -= counter;
            counter = 0;
        }

        if (counter == needleLen) {
            return (char *) start;
        }

        if (needleLen == haystackLen && start == NULL) {
            break;
        }

        haystack++;
    }


    return NULL;
}

int main(int argc, char **argv) {
    int len = strlen(argv[1]);

    if (argv[1] == NULL || argv[2] == NULL) {
        printf("Error invalid arguments");
        return 1;
    }

    for (int i = 0; i < len; i++) {
        printf("%c - %p\n", argv[1][i], &argv[1][i]);

    }

    printf("The substring %s can be found at adress %p in %s\n",
            argv[2], strstr(argv[1], argv[2]), argv[1]);
    return 0;
}
