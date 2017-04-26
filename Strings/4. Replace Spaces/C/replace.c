#include <stdio.h>
#include <string.h>

int main() {
    // Replace spaces with %20

    char string[] = "Hello world, foo bar baz.";

    int len = strlen(string);
    int spaces = 0;
    int i = 0;

    for (i = 0; i < len; i++) {
        if (string[i] == ' ') {
            spaces++;
        }
    }

    char newString[len + spaces * 2];

    int j = 0;

    for (i = 0; i < len; i++) {
        if (string[i] == ' ') {
            newString[j++] = '%';
            newString[j++] = '2';
            newString[j++] = '0';
        } else {
            newString[j++] = string[i];
        }
    }

    newString[j] = '\0';

    printf("%s\n%s", string, newString);

    return 0;
}
