#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {

        printf("Category: ALPHABET\n");
        
        if (c >= 'A' && c <= 'Z') {

            printf("Subcategory: UPPERCASE\n");
        } else {

            printf("Subcategory: LOWERCASE\n");
        }
    } else if (c >= '0' && c <= '9') {

        printf("Category: DIGIT\n");
    } else if (c == ' ' || c == '\t' || c == '\r' || c == '\n') {

        printf("Category: SPACE\n");
    } else {

        printf("Category: OTHER\n");
    }

    return 0;
}