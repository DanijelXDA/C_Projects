#include <stdio.h>

int main(void)
{
    int i, n, k; // BROJAC PETLJE UVEK MORA BITI CEO BROJ!
    int niz[25]; // TIP NIZA ZAVISI OD POSTAVKE ZADATKA!

    printf("\nUnesite broj elemenata niza: ");
    scanf("%d", &n);

    printf("\nUnos elemenata niza: ");
    for(i = 0; i < n; i++) // For petlja se najcesce koristi za rad sa nizovima
        scanf("%d", &niz[i]); // Ucitavanje elemenata niza

    printf("\nUnesite sa koje pozicije u nizu izbacujete element: ");
    scanf("%d", &k);

    for(i = k; i < n - 1; i++) // For petlja se najcesce koristi za rad sa nizovima
        niz[i] = niz[i + 1]; // Rotiranje elemenata ulevo za jedno mesto

    n--; // Smanjujemo velicinu niza za 1 manje element koji smo izbacili

    printf("\nNakon izbacivanja elementa sa %d. pozicije u nizu\nNiz izgleda: ", k);
    for(i = 0; i < n; i++) // For petlja se najcesce koristi za rad sa nizovima
        printf("%d ", niz[i]); // Ispis elemenata niza

    return 0;
}


