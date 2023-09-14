#include <stdio.h>

int main() {
    int quantity;
    float unitPrice = 5.0;
    float discount = 0.0;
    float totalPrice;

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    if (quantity > 50) {
        discount = 0.15;
    } else if (quantity > 30) {
        discount = 0.10;
    }

    totalPrice = quantity * unitPrice * (1 - discount);

    printf("Total price for %d items: Rs %.2f\n", quantity, totalPrice);

    return 0;
}
