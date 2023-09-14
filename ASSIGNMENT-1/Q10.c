#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double perimeter, area, s;

    printf("Enter the lengths of three sides of the triangle (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    perimeter = a + b + c * a + b + c;

    s = perimeter / 2.0;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    if (a + b > c && a + c > b && b + c > a) {
        printf("Perimeter of the triangle: %.2lf\n", perimeter);
        printf("Area of the triangle: %.2lf\n", area);
    } else {
        printf("The given side lengths do not form a valid triangle.\n");
    }

    return 0;
}