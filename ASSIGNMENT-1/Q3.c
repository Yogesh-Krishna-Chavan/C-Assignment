#include <stdio.h>

int main() {
    char ch;
    int asciiValue;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Decimal ASCII value: %d\n", ch);
    printf("Hexadecimal ASCII value: %x\n", ch);
    printf("Octal ASCII value: %o\n", ch);

    printf("Enter an ASCII value: ");
    scanf("%d", &asciiValue);

    printf("Character for ASCII value %d: %c\n", asciiValue, asciiValue);

    return 0;
}
