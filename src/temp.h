#include <stdio.h>
#include "utils.h"

// Function to convert temperatures
void conv_temp() {
    int tempChoice;
    int fahrenheit;
    int celcius;

    printf(COLOR_BOLD "\n[1] " COLOR_OFF "Convert Fahrenheit to Celcius");
    printf(COLOR_BOLD "\n[2] " COLOR_OFF "Convert Celcius to Fahrenheit");
    printf(COLOR_BOLD "\n[3] " COLOR_OFF "Convert Fahrenheit to Kelvin");
    printf(COLOR_BOLD "\n[4] " COLOR_OFF "Convert Celcius to Kelvin");
    printf("\nPlease choose a method from above: ");
    scanf("%d", &tempChoice);
    switch (tempChoice) {
    case 1:
        printf("\nPlease enter the temperature in Fahrenheit: ");
        scanf("%d", &fahrenheit);
        printf("\nThe temperature in Celcius is: %f°C\n",
               (fahrenheit - 32) / 1.8);
        break;

    case 2:
        printf("\nPlease enter the temperature in Celcius: ");
        scanf("%d", &celcius);
        printf("\nThe temperature in Fahrenheit is: %f°F\n",
               (celcius * 1.8) + 32);
        break;

    case 3:
        printf("\nPlease enter the temperature in Fahrenheit: ");
        scanf("%d", &fahrenheit);
        printf("\nThe temperature in kelvin is: %f°K\n",
               (fahrenheit + 459.67) * 5 / 9);
        break;

    case 4:
        printf("\nPlease enter the temperature in celcius: ");
        scanf("%d", &celcius);
        printf("\nThe temperature in kelvin is: %f°K", (celcius + 273.15));
        break;

    default:
        printf("Invalid choice, please enter the correct one");
    }
}
