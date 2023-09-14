#include <stdio.h>

int main() {
    int month, year;

    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12) {
        printf("Invalid month input.\n");
    } else {
        int days;

        if ((month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) ||
            (month == 4 || month == 6 || month == 9 || month == 11)) {
            days = 30;
        } else {
            days = 31;
        }

        if (month == 2) {
            days = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 29 : 28;
        }

        printf("Number of days in %d/%d: %d\n", month, year, days);
    }

    return 0;
}