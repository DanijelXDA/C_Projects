#include <stdio.h>
#include <string.h>

int main(void) {

    char prvaRec[50] = "Struktuirano"; // Moramo odvojiti dovoljno prostora za oba stringa
    char drugaRec[] = " programiranje"; // Ili će nam program pući

    printf("\nSpajanje 2 stringa\n");
    strcat(prvaRec, drugaRec); // Funkcija koja spaja 2 stringa
    // Na string prvaRec dodali smo string drugaRec
    printf("\nNakon spajanja string izgleda: \n\t%s\n\n", prvaRec);

    return 0;
}
