#include <stdio.h>
#include <string.h>

int isPermutation(char *string1, char *string2) {
    int str1Len = strlen(string1);
    int str2Len = strlen(string2);

    if (str1Len != str2Len) {
        return 0;
    }

    int MAX = 256;
    char letters[MAX];
    int i = 0;

    for (i = 0; i < MAX; i++) {
        letters[i] = 0;
    }

    for (i = 0; i < str1Len; i++) {
        letters[string1[i]]++;
    }

    for (i = 0; i < str2Len; i++) {
        letters[string2[i]]--;

        if (letters[string2[i]] < 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    // Check if one string is a permutation of another

    char string1[] = "hose";
    char string2[] = "shoe";
    char string3[] = "apple";
    char string4[] = "apples";
    char string5[] = "apples";
    char string6[] = "applez";

    printf("%s is a permutation of %s - %i\n",
            string1, string2, isPermutation(string1, string2));

    printf("%s is a permutation of %s - %i\n",
            string3, string4, isPermutation(string3, string4));

    printf("%s is a permutation of %s - %i\n",
            string5, string6, isPermutation(string5, string6));

    return 0;
}
