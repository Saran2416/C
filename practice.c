#include <stdio.h>

int main() {
    double a, b, sum;

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

    sum = a + b;

    printf("Result: %.2f + %.2f = %.2f\n", a, b, sum);

    return 0;
}
