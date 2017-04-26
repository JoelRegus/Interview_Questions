#include <stdio.h>
#include <string.h>

int hasUniqueChars(char* string) {
    int counter = 0;
    int val = 0;

    int len = strlen(string);

    for (int i = 0; i < len; i++) {
        val = 1 << string[i];

        if ((val & counter) > 0) {
            return 0;
        }

        counter |= val;
    }

    return 1;
}

int main() {
    // Check if a string contains all unique characters
    // No extra data structures

    char string1[] = "hello";
    char string2[] = "world";

    printf("%s contains unique characters: %i\n", string1, hasUniqueChars(string1));
    printf("%s contains unique characters: %i\n", string2, hasUniqueChars(string2));

    return 0;
}
