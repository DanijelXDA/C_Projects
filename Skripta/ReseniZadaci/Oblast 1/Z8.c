#include <stdio.h> // Pretprocesorska direktiva

int main(void) // Glavna funkcija programa
{
    int dan;

    printf("Unesite redni broj dana u nedelji (1 - 7): "); // Ispis na konzolu
    scanf("%i", &dan);                                     // Ucitavamo dan u promenljivu

    switch(dan)                     // Naredba Višestrukog granjanja switch()
    {
        case 1:
            printf("\nPonedeljak"); // Ispis na konzolu
            break;                  // Sprecavamo takozvano "PROGRAMSKO PROPADANJE"
        case 2:
            printf("\nUtorak\n");   // Ispis na konzolu
            break;                  // Sprecavamo takozvano "PROGRAMSKO PROPADANJE"
        case 3:
            printf("\nSreda\n");    // Ispis na konzolu
            break;                  // Sprecavamo takozvano "PROGRAMSKO PROPADANJE"
        case 4:
            printf("\nCetvrtak\n"); // Ispis na konzolu
            break;                  // Sprecavamo takozvano "PROGRAMSKO PROPADANJE"
        case 5:
            printf("\nPetak\n");    // Ispis na konzolu
            break;                  // Sprecavamo takozvano "PROGRAMSKO PROPADANJE"
        case 6:
            printf("\nSubota\n");   // Ispis na konzolu
            break;                  // Sprecavamo takozvano "PROGRAMSKO PROPADANJE"
        case 7:
            printf("\nNedelja\n"); // Ispis na konzolu
            break;                 // Sprecavamo takozvano "PROGRAMSKO PROPADANJE"
        default:
            printf("\nUneti redni broj dana ne odgovara nijednom danu u nedelji!\n"); // Ispis na konzolu
    }

    return 0;
}
