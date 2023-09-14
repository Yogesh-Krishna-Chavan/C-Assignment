#include<stdio.h>

int main(void){
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);

    char char1 = num1, char2 = num2;
    unsigned char uchar1 = num1, uchar2 = num2;
    long long1 = num1, long2 = num2;

    printf("\nResults with different data types:\n");
    printf("Signed Char - Sum: %d, Difference: %d, Product: %d\n", char1 + char2, char1 - char2, char1 * char2);
    printf("Unsigned Char - Sum: %d, Difference: %d, Product: %d\n", uchar1 + uchar2, uchar1 - uchar2, uchar1 * uchar2);
    printf("Int - Sum: %d, Difference: %d, Product: %d\n", num1 + num2, num1 - num2, num1 * num2);
    printf("Long - Sum: %ld, Difference: %ld, Product: %ld\n", long1 + long2, long1 - long2, long1 * long2);

    return 0;
}