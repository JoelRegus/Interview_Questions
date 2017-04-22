#include <stdio.h>
#include <string.h>

void reverseString(char *string, int start, int end) {
    char temp;

    while (start < end) {
        temp = string[start];
        string[start] = string[end];
        string[end] = temp;

        start++;
        end--;
    }
}

void reverseWords(char *string) {
    int start = 0;
    char temp;

    int i = 0;

    while (string[i] != '\0') {
        if (string[i] == ' ') {
            reverseString(string, start, i - 1);
            start = i + 1;
        }

        i++;
    }

    // Last word
    if (i > 0 && string[i] == '\0') {
        reverseString(string, start, i - 1);
    }
}

int main(int argc, char **argv) {
    char string[] = "The quick brown fox jumped over the lazy dog.";
    int len = strlen(string);

    reverseString(string, 0, len - 1);
    reverseWords(string);

    printf("%s\n", string);
    return 0;
}
