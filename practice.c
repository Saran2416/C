#include <stdio.h>

int main() {
    double a, b, result;

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

    if (b == 0.0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    result = a / b;

    printf("Result: %.2f / %.2f = %.2f\n", a, b, result);

    return 0;
}
