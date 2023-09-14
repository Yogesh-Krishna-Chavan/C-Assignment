//Using single printf statement
#include <stdio.h>

int main() {
    int n = 4; 

    for (int i = 1; i <= n; i++) {
        printf("%.*s\n", i, "****");
    }

    return 0;
}