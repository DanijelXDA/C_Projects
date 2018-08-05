#include <stdio.h> // Pretprocesorska direktiva

int main(void) // Glavna funkcija programa
{
    float d, s; // Promenljive za čuvanje stranica, površine i obima pravogaonika

    printf("Unesite duzinu terena: "); // Ispis poruke na konzolu
    scanf("%f", &d);                   // Čuvanje unete vrednosti u promenljivu

    printf("Unesite sirinu terena: "); // Ispis poruke na konzolu
    scanf("%f", &s);                  // Čuvanje unete vrednosti u promenljivu

    printf("\nSportista obidje %.2f metara za jedan krug.\n", (2 * d) + (2 * s));  // Ispis poruke na konzolu

    return 0;
}
