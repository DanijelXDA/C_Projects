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

    printf("\nRotiranje elemenata niza udesno za jedno mesto\n");
    pomocnaPromenljiva = niz[n - 1]; // Cuvamo poslednji element u nizu jer ce biti prepisan!
    for(i = n - 2; i >= 0; i--) // For petlja se najcesce koristi za rad sa nizovima
        niz[i + 1] = niz[i];

    niz[0] = pomocnaPromenljiva;

    printf("\nRotirani niz: ");
    for(i = 0; i < n; i++) // For petlja se najcesce koristi za rad sa nizovima
        printf("%d ", niz[i]); // Ispis elemenata niza

        getchar();
    getchar();
    return 0;
}


