#include <stdio.h>

int main(void)
{
    // Promenljive u vezi zadatka
    int niz[8]; // Deklaracija realnog niza
    int zbirNeparnih = 0; // Promenljiva u koju čuvamo zbir neparnih elemenata niza
    int i; // Promenljiva za for() petlju

    printf("Unos elemenata niza\n");
    for(i = 0; i < 8; i++)
    {
        printf("\tUnesite vrednost niz[%d] = ", i); // Ispis da se unese element
        scanf("%d", &niz[i]); // Učitavanje elementa niza
    }

    for(i = 0; i < 8; i++)
        if( (niz[i] % 2) != 0 ) // Provera da li je element niza neparan
            zbirNeparnih += niz[i]; // Dodaj neparan element u sumu


    printf("\nZbir neparnih elemenata je: %d", zbirNeparnih);

    return 0;
}
