#include <stdio.h>
#include "utils.h"

// Function to convert lenghts
void conv_length() {
    int choice;
    float value;
    // millimeters, centimeter, meters, kilometer
    printf(COLOR_BOLD "\n[1]" COLOR_OFF " Millimeter to Centimeter\n");
    printf(COLOR_BOLD "[2]" COLOR_OFF " Centimeter to Meter\n");
    printf(COLOR_BOLD "[3]" COLOR_OFF " Meter to Kilometers\n");
    printf(COLOR_BOLD "[4]" COLOR_OFF " Inch to Foot\n");
    printf(COLOR_BOLD "[5]" COLOR_OFF " Kilometers to Light Years\n");
    printf(COLOR_BOLD "[6]" COLOR_OFF " Lightyears to Kilometers\n");
    printf("Please choose a method: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
        printf("\nPlease enter the value in Milimeters: ");
        scanf("%f", &value);
        printf("Value in Centimeter: %.2f\n", value / 10);
        break;
    case 2:
        printf("\nPlease enter the value in Centimeters: ");
        scanf("%f", &value);
        printf("Value in Meter: %.2f\n", value / 100);
        break;
    case 3:
        printf("\nPlease enter the value in Meters: ");
        scanf("%f", &value);
        printf("Value in Kilometers: %.2f\n", value / 1000);
        break;
    case 4:
        printf("\nPlease enter the value in Inches: ");
        scanf("%f", &value);
        printf("Value in Foot is: %.2f\n", value * 0.083);
        break;
    case 5:
        printf("\nPlease enter the value in Kilometers: ");
        scanf("%f", &value);
        printf("Value in LighYears is: %f\n", value / 9460730472580.8);
        break;
    case 6:
        printf("\nPlease enter the value in Lightyears: ");
        scanf("%f", &value);
        printf("Value in Kilometers is: %.2f\n", value * 9460730472580.8);
        break;

    default:
        printf("Invalid choice, please enter the correct one");
    }
}
