#include <stdio.h>

int factorial(int n) {
    if (n < 0) {
        return -1; // Error for negative numbers
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    
    printf("Factorial of %d is %d\n", num, factorial(num));
    
    return 0;
}
