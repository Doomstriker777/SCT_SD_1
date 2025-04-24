#include <stdio.h>

void convertTemperature(float temp, int fromUnit, int toUnit) {
    float result;

    if (fromUnit == 1)
        result = temp;
    else if (fromUnit == 2)
        result = (temp - 32) * 5 / 9;
    else if (fromUnit == 3)
        result = temp - 273.15;

    if (toUnit == 1)
        printf("Result: %.2f Celsius\n", result);
    else if (toUnit == 2)
        printf("Result: %.2f Fahrenheit\n", (result * 9 / 5) + 32);
    else if (toUnit == 3)
        printf("Result: %.2f Kelvin\n", result + 273.15);
    else
        printf("Invalid target unit!\n");
}

int main() {
    float temp;
    int fromUnit, toUnit;

    printf("Temperature Converter\n");
    printf("---------------------\n");
    printf("Choose the input unit:\n");
    printf("1. Celsius\n2. Fahrenheit\n3. Kelvin\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &fromUnit);

    printf("Enter temperature value: ");
    scanf("%f", &temp);

    printf("Choose the unit to convert to:\n");
    printf("1. Celsius\n2. Fahrenheit\n3. Kelvin\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &toUnit);

    convertTemperature(temp, fromUnit, toUnit);

    return 0;
}
