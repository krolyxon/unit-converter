#include <stdio.h>
#include "utils.h"
#include "mass.h"
#include "length.h"
#include "temp.h"

void ask_unit() {
    int uchoice;
    clearscr();
    printf(COLOR_MAGENTA);
    print_image("./ascii/unit.txt");
    printf(COLOR_RESET);
    printf(COLOR_BOLD "\n[1]" COLOR_OFF " Mass/Weight");
    printf(COLOR_BOLD "\n[2]" COLOR_OFF " Lenght");
    printf(COLOR_BOLD "\n[3]" COLOR_OFF " Temperature");
    printf("\n[Please choose a unit conversion method: ");
    scanf("%d", &uchoice);
    switch (uchoice) {
    case 1:
        conv_mass();
        break;
    case 2:
        conv_length();
        break;
    case 3:
        conv_temp();
        break;
    }
}

