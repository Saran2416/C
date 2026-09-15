#include <stdio.h>

int main() {
    double a, b, product;

    printf("Enter first number: ");
    if (scanf("%lf", &a) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &b) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    product = a * b;

    printf("Result: %.2f * %.2f = %.2f\n", a, b, product);

    return 0;
}
