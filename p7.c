#include <stdio.h>

int main(void)
{
    int i, j, n, temp; // BROJAC PETLJE UVEK MORA BITI CEO BROJ!
    int niz[25]; // TIP NIZA ZAVISI OD POSTAVKE ZADATKA!

    printf("\nUnesite broj elemenata niza: ");
    scanf("%d", &n);

    printf("\nUnos elemenata niza: ");
    for(i = 0; i < n; i++) // For petlja se najcesce koristi za rad sa nizovima
        scanf("%d", &niz[i]); // Ucitavanje elemenata niza

    for(i = 0; i < n - 1; i++) // For petlja se najcesce koristi za rad sa nizovima
        for(j = i + 1; j < n; j++)     // Sortiranje niza
            if( niz[i] > niz[j] ) {
                temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }

    printf("\nSortirani niz: ");
    for(i = 0; i < n; i++) // For petlja se najcesce koristi za rad sa nizovima
        printf("%d ", niz[i]); // Ispis elemenata niza

    return 0;
}


