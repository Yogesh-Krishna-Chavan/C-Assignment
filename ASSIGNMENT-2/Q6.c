#include <stdio.h>

int main() {
    int originalNumber, reversedNumber = 0, remainder, temp;

    printf("Enter a 5-digit number: ");
    scanf("%d", &originalNumber);

    temp = originalNumber;

    while (temp != 0) {
        remainder = temp % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        temp /= 10;
    }

    if (originalNumber == reversedNumber) {
        printf("%d is a numeric palindrome.\n", originalNumber);
    } else {
        printf("%d is not a numeric palindrome.\n", originalNumber);
    }

    return 0;
}
