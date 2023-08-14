#include <stdio.h>
// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}
// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32;
}
int main() {
    double temperature;
    int choice;
    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temperature);
        printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, fahrenheitToCelsius(temperature));
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temperature);
        printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, celsiusToFahrenheit(temperature));
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}
  
