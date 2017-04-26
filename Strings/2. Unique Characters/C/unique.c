#include <stdio.h>
#include <string.h>

int hasUniqueChars(char* string) {
    int max = 256;
    int letters[max];

    for (int i = 0; i < max; i++) {
        letters[i] = 0;
    }

    int len = strlen(string);

    for (int j = 0; j < len; j++) {
        if (letters[string[j]] > 0) {
            return 0;
        }

        letters[string[j]]++;
    }

    return 1;
}

int main() {
    // Check if a string contains all unique characters

    char string1[] = "Hello";
    char string2[] = "world";

    printf("%s contains unique characters: %i\n", string1, hasUniqueChars(string1));
    printf("%s contains unique characters: %i\n", string2, hasUniqueChars(string2));

    return 0;
}
