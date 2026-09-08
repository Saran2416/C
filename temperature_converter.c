#include <stdio.h>

int main() {
    int choice;
    float temp, result;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            result = (temp * 9.0 / 5.0) + 32.0;
            printf("%.2f C = %.2f F\n", temp, result);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            result = (temp - 32.0) * 5.0 / 9.0;
            printf("%.2f F = %.2f C\n", temp, result);
            break;
        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            result = temp + 273.15;
            printf("%.2f C = %.2f K\n", temp, result);
            break;
        case 4:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &temp);
            result = temp - 273.15;
            printf("%.2f K = %.2f C\n", temp, result);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
