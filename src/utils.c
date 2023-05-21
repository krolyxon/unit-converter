#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

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
