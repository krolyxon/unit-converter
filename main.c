// ask the user for input, and let the user choose between unit or currency.
// if chosen unit, ask the user to choose the unit to convert to
// if chosen currency, ask the user to choose the currecy to convert to
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 128

#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_BLUE "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN "\x1b[36m"
#define COLOR_RESET "\x1b[0m"
#define COLOR_BOLD "\e[1m"
#define COLOR_OFF "\e[m"

int uchoice;
int category;
int tempChoice;
int currencyChoice;
int massChoice;
int fahrenheit;
int celcius;

void print_image(char *filename);
void clearscr();
int currency(int);
int unit(int);
void ask_unit();
void conv_currency();
void conv_mass();
void conv_length();
void conv_temp();

int main() {
    clearscr();
    printf(COLOR_MAGENTA);
    print_image("./ascii/banner.txt");
    // print_image("./priv/priv.txt");
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

void ask_unit() {
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

// Function to convert temperatures
void conv_temp() {
    float value;
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

// Function to convert mass
void conv_mass() {
    float value;
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

// Prints the provided file to stdout
void print_image(char *filename) {
    char read_string[MAX_LEN];
    FILE *fptr = NULL;
    if ((fptr = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "error opening %s\n", filename);
    }
    while (fgets(read_string, sizeof(read_string), fptr) != NULL)
        printf("%s", read_string);
    fclose(fptr);
}

// Function to clear the screen
void clearscr(void) {
#ifdef _WIN32
    system("cls");
#elif defined(unix) || defined(__unix__) || defined(__unix) ||                 \
    (defined(__APPLE__) && defined(__MACH__))
    system("clear");
#else
#error "OS not supported."
#endif
}
