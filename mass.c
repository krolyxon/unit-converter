#include <stdio.h>
#include "utils.h"

// Function to convert mass
void conv_mass() {
    float value;
    int massChoice;
    printf("\nWelcome to Mass Converter! \n");
    printf("Here is a list of conversations to choose from: \n");
    printf(COLOR_BOLD "[1]" COLOR_OFF " ounces to pounds\n");
    printf(COLOR_BOLD "[2]" COLOR_OFF " gram to pounds\n");
    printf(COLOR_BOLD "[3]" COLOR_OFF " pounds to kilograms\n");
    printf(COLOR_BOLD "[4]" COLOR_OFF " kilograms to gram\n");
    printf("Please enter your choice: ");
    scanf("%d", &massChoice);

    switch (massChoice) {
    case 1:
        printf("Please enter the ounce amount: ");
        scanf("%f", &value);
        printf("Pounds: %.2f\n", value * 0.0625);
        break;

    case 2:
        printf("Please enter the gram amount: ");
        scanf("%f", &value);
        printf("Pounds: %.2f\n", value * 0.00220462);
        break;

    case 3:
        printf("Please enter the pounds amount: ");
        scanf("%f", &value);
        printf("Kilogram : %.2f\n", value / 2.2046);
        break;

    case 4:
        printf("Please enter the Kilograms ammount: ");
        scanf("%f", &value);
        printf("%.2f Grams\n", value * 1000);
        break;

    default:
        printf("Please enter the correct choice. \n");
        break;
    }
}
