#include <stdio.h>

int dayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    
    int k = year % 100;
    int j = year / 100;
    
    int dayOfWeek = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 - 2 * j) % 7;
    
    if (dayOfWeek < 0)
        dayOfWeek += 7;
    
    return dayOfWeek;
}

int main() {
    int day, month, year;
    
    printf("Enter date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);
    
    const char* daysOfWeek[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    
    int dayIndex = dayOfWeek(day, month, year);
    
    printf("The day of the week for %02d/%02d/%04d is %s\n", day, month, year, daysOfWeek[dayIndex]);
    
    return 0;
}
