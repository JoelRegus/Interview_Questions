#include <stdio.h>
#include <string.h>

int strcmp(const char *str1, const char *str2) {
    int LESS = -1;
    int EQUAL = 0;
    int GREATER = 1;
    int ERROR = -2;

    if (str1 == NULL || str1 == NULL) {
        return ERROR;
    }

    int str1Len = strlen(str1);
    int str2Len = strlen(str2);

    if (str1Len > str2Len) {
        return GREATER;
    } if (str1Len < str2Len) {
        return LESS;
    }

    int str1Val = 0;
    int str2Val = 0;

    while (*str1 != '\0') {
        str1Val += *str1 - *str2;
        str2Val += *str2 - *str1;

        str1++;
        str2++;
    }

    if (str1Val == str2Val) {
        return EQUAL;
    } else if (str1Val > str2Val) {
        return GREATER;
    } else if (str1Val < str2Val) {
        return LESS;
    }

    return ERROR;
}

int main(int argc, char **argv) {

    printf("hello, HELLO = %i\n", strcmp("hello", "HELLO"));
    printf("hello, hello = %i\n", strcmp("hello", "hello"));
    printf("heLlo, hello = %i\n", strcmp("helLo", "hello"));
    printf("hell, hello = %i\n", strcmp("hell", "hello"));
    printf("hello, hell = %i\n", strcmp("hello", "hell"));
    printf("hello, hello world = %i\n", strcmp("hello", "hello world"));
    printf("1, 1 world = %i\n", strcmp("1", "1"));
    printf("11, 12 world = %i\n", strcmp("11", "12"));

    return 0;
}

