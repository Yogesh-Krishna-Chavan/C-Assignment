#include <stdio.h>

int main() {
    double dividend, divisor, result;

    
    printf("Enter the dividend: ");
    scanf("%lf", &dividend);

    printf("Enter the divisor: ");
    scanf("%lf", &divisor);


    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
    
        result = dividend / divisor;
        printf("Result of division: %.2lf\n", result);
    }

    return 0;
}
