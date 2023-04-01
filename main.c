// ask the user for input, and let the user choose between unit or currency.
// if chosen unit, ask the user to choose the unit to convert to
// if chosen currency, ask the user to choose the currecy to convert to
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 128

int uchoice;
int cchoice;
int category;
int tempChoice;
int currencyChoice;
int massChoice;
int userinputF;         // User inputted Fahreinheit;
int userinputC;         // User inputted Celsius;
int userinputUSDtoEuro; // User inputted for USD to EURO;
int userinputUSDtoJPY;  // User inputted for USD to JPY;
int userinputUSDtoRMB;  // User inputted for USD to RMB;
int userinputOunce;     // User inputted for Ounce;
float userinputPound;
float userinputKg;
int userinputGram;       // User inputted for Gram;
int fahrenheitToCelcius; // variable that stores the converted F->C;
int celciusToFahrenheit; // variable that stores the converted C->F;
float USDtoEURO;         // varaible that stores the converted USD->EURO;
float USDtoJPY;          // stores the converted USD->JPY;
float USDtoRMB;          // stores the converted USD->RMB;
float ounceToPounds;     // stores the converted Ounce->Pounds;
float poundToKg;
float gramsToPounds; // stores the vonerted Grams->Pounds;

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
  print_image("img/banner.txt");
  printf("\n1. Unit");
  printf("\n2. Currency");
  printf("\n3. Exit");
  printf("\nPlease choose a Category: ");
  scanf("%d", &category);

  switch (category) {
  case 1:
    ask_unit();
    break;
  case 2:
    conv_currency();
    break;
  case 3:
    return 0;
  default:
    return 0;
  }
}

void ask_unit() {
  printf("\n1. Mass");
  printf("\n2. Lenght");
  printf("\n3. Temperature");
  printf("\nPlease choose a unit conversion method: ");
  scanf("%d", &uchoice);
  switch (uchoice) {
  case 1:
    conv_mass();
    break;
  case 2:
    conv_length();
    break;
    // case 3: conv_temp(); break;
  }
}

// Function to convert lenghts
void conv_length() {
  float choice, value;

  // millimeters, centimeter, meters, kilometer
  printf("\n1) Millimeter to Centimeter\n");
  printf("2) Centimeter to Meter\n");
  printf("3) Meter to Kilometers\n");
  printf("Please choose a method: ");
  scanf("%f", &choice);

  int lol = choice;
  switch (lol) {
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
  }
}

// Function to convert mass
void conv_mass() {
  printf("Welcome to Mass Converter! \n");
  printf("Here is a list of conversations to choose from: \n");
  printf("1) ounces to pounds\n");
  printf("2) gram to pounds\n");
  printf("3) pounds to kilograms\n");
  printf("4) kilograms to gram\n");
  printf("Please enter your choice: ");
  scanf("%d", &massChoice);
  if (massChoice == 1) {
    printf("Please enter the ounce amount: ");
    scanf("%d", &userinputOunce);
    ounceToPounds = userinputOunce * 0.0625;
    printf("Pounds: %.2f", ounceToPounds);
  } else if (massChoice == 2) {
    printf("Please enter the gram amount: ");
    scanf("%d", &userinputGram);
    gramsToPounds = userinputGram * 0.00220462;
    printf("Pounds: %.2f", gramsToPounds);
  } else if (massChoice == 3) {
    printf("Please enter the pounds amount: ");
    scanf("%f", &userinputPound);
    poundToKg = userinputPound / 2.2046;
    printf("Kilogram : %.2f", poundToKg);
  } else if (massChoice == 4) {
    printf("Please enter the Kilograms ammount: ");
    scanf("%f", &userinputKg);
    printf("%.2f Grams", userinputKg * 1000);
  } else {
    printf("Please enter the correct choice. \n");
  }
}

void conv_currency() {
  clearscr();
  print_image("img/currency-converter.txt");
  printf("Here is a list of conversations to choose from: \n");
  printf("1) USD to Euro. \n");
  printf("2) USD to JPY. \n");
  printf("3) USD to RMB. \n");
  printf("Please choose a currency to convert to: ");
  scanf("%d", &currencyChoice);
  if (currencyChoice == 1) {
    printf("Please enter the USD amount: ");
    scanf("%d", &userinputUSDtoEuro);
    USDtoEURO = userinputUSDtoEuro * 0.87;
    printf("Euro: %.2f\n",
           USDtoEURO); // %.2f = rounds the float to only 2 decimal places;
  } else if (currencyChoice == 2) {
    printf("Please enter the USD amount: ");
    scanf("%d", &userinputUSDtoJPY);
    USDtoJPY = userinputUSDtoJPY * 111.09;
    printf("JPY: %.2f\n", USDtoJPY);
  } else if (currencyChoice == 3) {
    printf("Please enter the USD amount: ");
    scanf("%d", &userinputUSDtoRMB);
    USDtoRMB = userinputUSDtoRMB * 6.82;
    printf("RMB: %.2f\n", USDtoRMB);
  } else
    printf("Please enter correct choice. ");
}

// Function to print the banner
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
