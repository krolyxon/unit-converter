#include "currency.h"
#include "utils.h"
#include <stdio.h>
int currencyChoice;

void conv_currency() {
    int value;
    clearscr();
    printf(COLOR_MAGENTA);
    print_image("./ascii/currency.txt");
    printf(COLOR_RESET);
    printf("Here is a list of conversations to choose from: \n");
    printf(COLOR_BOLD "[1]" COLOR_OFF " USD to Euro. \n");
    printf(COLOR_BOLD "[2]" COLOR_OFF " USD to JPY. \n");
    printf(COLOR_BOLD "[3]" COLOR_OFF " USD to RMB. \n");
    printf(COLOR_BOLD "[4]" COLOR_OFF " USD to INR. \n");
    printf(COLOR_BOLD "[5]" COLOR_OFF " INR to USD. \n");
    printf(COLOR_BOLD "[6]" COLOR_OFF " INR to JPY. \n");
    printf(COLOR_BOLD "[7]" COLOR_OFF " INR to Euro. \n");
    printf(COLOR_BOLD "[8]" COLOR_OFF " Euro to INR. \n");
    printf("Please choose a currency to convert to: ");
    scanf("%d", &currencyChoice);

    switch (currencyChoice) {
    case 1:
        printf("Please enter the USD amount: ");
        scanf("%d", &value);
        printf("Euro: %.2f\n", value * 0.87);
        break;

    case 2:
        printf("Please enter the USD amount: ");
        scanf("%d", &value);
        printf("JPY: %.2f\n", value * 111.09);
        break;

    case 3:
        printf("Please enter the USD amount: ");
        scanf("%d", &value);
        printf("RMB: %.2f\n", value * 6.82);
        break;

    case 4:
        printf("Please enter the USD amount: ");
        scanf("%d", &value);
        printf("INR: %.2f\n", value * 81.0);
        break;

    case 5:
        printf("Please enter the amount in INR: ");
        scanf("%d", &value);
        printf("USD: %.2f\n", value / 81.0);
        break;

    case 6:
        printf("Please enter the amount in INR: ");
        scanf("%d", &value);
        printf("JPY: %.2f\n", value / 1.62);
        break;

    case 7:
        printf("Please enter the amount in INR: ");
        scanf("%d", &value);
        printf("Euro: %.2f\n", value / 0.01);
        break;

    case 8:
        printf("Please enter the amount in EUR: ");
        scanf("%d", &value);
        printf("INR: %.2f\n", value * 89.19);
        break;

    default:
        printf("Please enter correct choice. ");
    }
}
