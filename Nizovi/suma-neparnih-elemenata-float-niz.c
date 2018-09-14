#include <stdio.h>

int main(void)
{
    // Promenljive u vezi zadatka
    float niz[7]; // Deklaracija realnog niza
    float zbirNeparnih = 0; // Promenljiva u koju čuvamo zbir neparnih elemenata niza
    int i; // Promenljiva za for() petlju

    printf("Unos elemenata niza\n");
    for(i = 0; i < 7; i++)
    {
        printf("\tUnesite vrednost niz[%d] = ", i); // Ispis da se unese element
        scanf("%f", &niz[i]); // Učitavanje elementa niza
    }

    for(i = 0; i < 7; i++)
    {
        int konvertovanBroj = niz[i] * 100; // ako je broj 5.15 pomnožimo sa 100 da bi dobili 515
        // i tada znamo da taj broj nije deljiv sa 2 tj. neparan je!

        if( ( konvertovanBroj % 2) != 0 ) // Provera da li je element niza neparan
            zbirNeparnih += niz[i]; // Dodaj neparan element u sumu
        // Radi samo za realne brojeve do 2 decimale!!!
    }

    printf("\nZbir neparnih elemenata je: %.2f", zbirNeparnih);

    return 0;
}
