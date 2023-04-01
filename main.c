// ask the user for input, and let the user choose between unit or currency.
// if chosen unit, ask the user to choose the unit to convert to
// if chosen currency, ask the user to choose the currecy to convert to
#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 128

int uchoice;
int cchoice;
int category;
int tempChoice;
int currencyChoice;
int massChoice;
int userinputF; // User inputted Fahreinheit;
int userinputC; // User inputted Celsius;
int userinputUSDtoEuro; // User inputted for USD to EURO;
int userinputUSDtoJPY; // User inputted for USD to JPY;
int userinputUSDtoRMB; // User inputted for USD to RMB;
int userinputOunce; // User inputted for Ounce;
int userinputGram; // User inputted for Gram;
int fahrenheitToCelcius; // variable that stores the converted F->C;
int celciusToFahrenheit; // variable that stores the converted C->F;
float USDtoEURO ; // varaible that stores the converted USD->EURO;
float USDtoJPY; // stores the converted USD->JPY;
float USDtoRMB; // stores the converted USD->RMB;
float ounceToPounds; // stores the converted Ounce->Pounds;
float gramsToPounds; // stores the vonerted Grams->Pounds;



void print_image(char *filename);
void clearscr();
int currency(int);
int unit(int);
void ask_unit();
void conv_currency();
void conv_weight();
void conv_length();
void conv_temp();

int main() {
  clearscr();
  print_image("img/banner.txt");
  printf("\n1. Unit");
  printf("\n2. Currency");
  printf("\n3. Exit");
  printf("\nPlease choose a Category(U/C/E): ");
  scanf("%d", &category);

  switch (category) {
  // case 1: ask_unit(); break;
  case 2: conv_currency(); break;
  case 3: return 0;
  default: return 0;
  }
}


// void ask_unit() {
//   printf("\n1. Weight");
//   printf("\n2. Lenght");
//   printf("\n3. Temperature");
//   printf("\nPlease choose a unit conversion method: ");
//   scanf("%d", &uchoice);
//   switch (uchoice) {
//         case 1: conv_weight(); break;
//         case 2: conv_length(); break;
//         case 3: conv_temp(); break;
//     }
// }

void conv_currency() {
      clearscr();
      print_image("img/currency-converter.txt");
      printf("Here is a list of conversations to choose from: \n");
      printf("1) USD to Euro. \n");
      printf("2) USD to JPY. \n");
      printf("3) USD to RMB. \n");
      printf("Please choose a currency to convert to: ");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the USD amount: ");
          scanf("%d",&userinputUSDtoEuro);
          USDtoEURO = userinputUSDtoEuro * 0.87;
          printf("Euro: %.2f\n",USDtoEURO); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("Please enter the USD amount: ");
          scanf("%d",&userinputUSDtoJPY);
          USDtoJPY = userinputUSDtoJPY * 111.09;
          printf("JPY: %.2f\n",USDtoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the USD amount: ");
        scanf("%d",&userinputUSDtoRMB);
        USDtoRMB = userinputUSDtoRMB * 6.82;
        printf("RMB: %.2f\n",USDtoRMB);
      }
      else
        printf("Please enter correct choice. ");
}

// Function to print the banner
void print_image(char *filename) {
  char read_string[MAX_LEN];
  FILE *fptr = NULL;
  if ((fptr = fopen(filename,"r")) == NULL) {
        fprintf(stderr, "error opening %s\n", filename);
    }
  while (fgets(read_string, sizeof(read_string), fptr) != NULL)
    printf("%s", read_string);
  fclose(fptr);
}

// Function to clear the screen
void clearscr(void)
{
#ifdef _WIN32
    system("cls");
#elif defined(unix) || defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
    system("clear");
#else
    #error "OS not supported."
#endif
}
