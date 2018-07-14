#include <stdio.h>

void kopiranjeStringa(char *str, char *nStr) {
    int i = 0;
    while( (nStr[i] = str[i]) != '\0') // Prepisuje se i završni znak ’\0’
        i++;

    return;
}

int main(void) {
    char string[] = "Struktuirano programiranje";
    char noviString[50];

    printf("\nKopiranje stringa string u noviString\n");
    kopiranjeStringa(string, noviString);

    printf("\n\tPocetni string: %s\n\n", string);
    printf("\n\tKopirani string: %s\n\n", noviString);

    return 0;
}
