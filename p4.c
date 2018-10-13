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

    printf("\nRotiranje elemenata niza ulevo za jedno mesto\n");
    pomocnaPromenljiva = niz[0]; // Cuvamo prvi element u nizu jer ce biti prepisan!
    for(i = 1; i < n; i++) // For petlja se najcesce koristi za rad sa nizovima
        niz[i - 1] = niz[i];

    niz[n - 1] = pomocnaPromenljiva;

    printf("\nRotirani niz: ");
    for(i = 0; i < n; i++) // For petlja se najcesce koristi za rad sa nizovima
        printf("%d ", niz[i]); // Ispis elemenata niza

    return 0;
}


