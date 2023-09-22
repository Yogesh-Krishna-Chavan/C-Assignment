#include <stdio.h>

int main() {
    int month, year;
    
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    switch(month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            printf("Number of days in %d-%d: 31 days\n", month, year);
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            printf("Number of days in %d-%d: 30 days\n", month, year);
            break;
        case 2: // February
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                printf("Number of days in %d-%d: 29 days (Leap Year)\n", month, year);
            else
                printf("Number of days in %d-%d: 28 days\n", month, year);
            break;
        default:
            printf("Invalid month input!\n");
    }

    return 0;
}