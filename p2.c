#include <stdio.h>

int main(void)
{
    int i; // BROJAC PETLJE UVEK MORA BITI CEO BROJ!
    float niz[15]; // TIP NIZA ZAVISI OD POSTAVKE ZADATKA!
    float broj;

    for(i = 0; i < 15; i++) // For petlja se najcesce koristi za rad sa nizovima
        scanf("%f", &niz[i]); // UCitavanje elemenata niza

    printf("\nUnesite koji broj trazite u nizu: ");
    scanf("%f", &broj);

    printf("\nPretraga niza");
    for(i = 0; i < 15; i++) // For petlja se najcesce koristi za rad sa nizovima
        if( niz[i] == broj) { // PRVO POJAVLJIVANJE U NIZU
            printf("\nTrazeni broj se nalazi na poziciji sa indeksom: %d\n", i);
            break; // Ako je broj pronadjen prekida se for petlja tj. dalja pretraga niza!
        }

        if(i == 15) // Ceo niz je pretrazen ali nema trazenog broja
            printf("\nTrazeni element se ne nalazi u nizu!\n");

            getchar();
    getchar();
    return 0;
}


