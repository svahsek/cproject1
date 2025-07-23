#include <stdio.h>
#include "programs.h"

void temperature() {
    float celsius, fahrenheit;
    printf("\nTemperature Converter\n");
    printf("Enter the Temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (1.8 * celsius) + 32;
    printf("Temperature in Fahrenheit: %f\n", fahrenheit);
}