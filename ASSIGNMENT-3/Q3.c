// File: number_operations.c
#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversedNum = 0, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate sum of digits and reverse the number
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", reversedNum);

    if (originalNum == reversedNum) {
        printf("%d is a numeric palindrome\n", originalNum);
    } else {
        printf("%d is not a numeric palindrome\n", originalNum);
    }

    int armstrongSum = 0;
    num = originalNum;

    // Check for Armstrong number
    while (num != 0) {
        remainder = num % 10;
        armstrongSum += (remainder * remainder * remainder);
        num /= 10;
    }

    if (originalNum == armstrongSum) {
        printf("%d is an Armstrong number\n", originalNum);
    } else {
        printf("%d is not an Armstrong number\n", originalNum);
    }

    return 0;
}
