#include <stdio.h>

int main(void)
{
    int i, n; // BROJAC PETLJE UVEK MORA BITI CEO BROJ!
    int niz[25]; // TIP NIZA ZAVISI OD POSTAVKE ZADATKA!
    int pomocnaPromenljiva;

    printf("\nUnesite broj elemenata niza: ");
    scanf("%d", &n);

    printf("\nUnos elemenata niza: ");
    for(i = 0; i < n; i++) // For petlja se najcesce koristi za rad sa nizovima
        scanf("%d", &niz[i]); // UCitavanje elemenata niza

    printf("\nInvertovanje elemenata niza\n");
    for(i = 0; i < n / 2; i++) // For petlja se najcesce koristi za rad sa nizovima
    {
        pomocnaPromenljiva = niz[i]; // Zamena mesta prvom i poslednjem elementu
        niz[i] = niz[n - 1 - i]; // Drugom i pretposlednjem, i tako redom
        niz[n - 1 - i] = pomocnaPromenljiva;
    }

    printf("\nInvertovani niz: ");
    for(i = 0; i < n; i++) // For petlja se najcesce koristi za rad sa nizovima
        printf("%d ", niz[i]); // Ispis elemenata niza

    return 0;
}


