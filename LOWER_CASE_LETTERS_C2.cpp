#include <stdio.h>
#include <ctype.h>

void countLetters(const char* str, int* uppercaseCount, int* lowercaseCount) {
    *uppercaseCount = 0;
    *lowercaseCount = 0;

    while (*str) {
        if (isupper(*str)) {
            (*uppercaseCount)++;
        } else if (islower(*str)) {
            (*lowercaseCount)++;
        }

        str++;
    }
}

int main() {
    char str[100];
    int uppercaseCount, lowercaseCount;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin)
    str[strcspn(str, "\n")] = '\0';// remove newline character from fgets

    countLetters(str, &uppercaseCount, &lowercaseCount);

    printf("Number of uppercase letters: %d\n", uppercaseCount);
    printf("Number of lowercase letters: %d\n", lowercaseCount);

    return 0;
}