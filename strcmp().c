#include <stdio.h>
#include <string.h>

int main(void) {
    char prvaRec[] = "String";
    char drugaRec[] = "String";

    printf("\nUporedjivanje 2 stringa\n");
    // Ako su stringovi jednaki funkcija strcmp() vraća 0
    // Ako nisu jednaki vraća broj različit od 0
    if( !(strcmp(prvaRec, drugaRec)) ) // Zato i negiramo 0
        printf("\n\tStringovi su jednaki.\n\n"); // Da bi se ispisala ova poruka
    else
        printf("\n\tStringovi nisu jedaki.\n\n");

    return 0;
}
