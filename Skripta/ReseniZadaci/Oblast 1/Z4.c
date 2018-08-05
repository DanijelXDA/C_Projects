#include <stdio.h> // Pretprocesorska direktiva

int main(void) // Glavna funkcija programa
{
    char c; // Promenljiva tipa char

    printf("Unesite jedan karakter: "); // Ispis poruke na konzolu
    scanf("%c", &c); // Ucitavanje jednog karaktera

    // Ne mora fflush(stdin); jer samo jednom ucitavamo karakter!

    printf("\nNumericka vrednost karaktera '%c' je %d.\n", c, c); // Ispis poruke na konzolu

    return 0;
}
