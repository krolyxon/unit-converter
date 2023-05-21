// ask the user for input, and let the user choose between unit or currency.
// if chosen unit, ask the user to choose the unit to convert to
// if chosen currency, ask the user to choose the currecy to convert to
#include "currency.h"
#include "unit.h"
#include "utils.h"
#include <stdio.h>
#include <string.h>

int main() {
    int category;
    clearscr();
    printf(COLOR_MAGENTA);
    print_image("./ascii/banner.txt");
    printf(COLOR_RESET);
    printf(COLOR_BOLD "\n[1] " COLOR_OFF "Unit Converter");
    printf(COLOR_BOLD "\n[2] " COLOR_OFF "Currency Converter");
    printf(COLOR_BOLD "\n[3] " COLOR_OFF "Exit");
    printf("\nPlease choose a Category: ");
    scanf("%d", &category);

    switch (category) {
    case 1:
        ask_unit();
        break;
    case 2:
        conv_currency();
        break;
    default:
        return 0;
    }
}
