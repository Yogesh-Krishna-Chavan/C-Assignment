#include <stdio.h>

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    if (number >= 1000 && number <= 9999) {
        int thousands = (number / 1000) % 10;
        int hundreds = (number / 100) % 10;
        int tens = (number / 10) % 10;
        int ones = number % 10;

        printf("a. Face values: %d %d %d %d\n", thousands, hundreds, tens, ones);

        printf("b. Place values: %d = %d*1000 + %d*100 + %d*10 + %d\n", number, thousands, hundreds, tens, ones);

        printf("c. Number in reverse order: %d%d%d%d\n", ones, tens, hundreds, thousands);
    } else {
        printf("Please enter a valid 4-digit number.\n");
    }

    return 0;
}
