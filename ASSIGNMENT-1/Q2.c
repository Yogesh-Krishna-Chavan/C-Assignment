#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the number in character format
    printf("Character format: %c\n", number);

    // Print the number in decimal format
    printf("Decimal format: %d\n", number);

    // Print the number in octal format
    printf("Octal format: %o\n", number);

    // Print the number in hexadecimal format
    printf("Hexadecimal format: %x\n", number);

    return 0;
}
