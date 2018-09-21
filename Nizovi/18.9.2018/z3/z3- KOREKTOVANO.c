/*
1. Inicijalizovati realni niz od 5 elemenata i prikazati treci i cetvrti element.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // float i, niz[5];
    int i;         // I UVEK MORA BITI CEO BROJ!!
    float niz[5]; // Tačno

    for(i = 0; i < 5; i++){ // Tačno
       // printf("Unesite niz [%f] = ", i); // POŠTO je i ceo broj konverzija je druga
        printf("Unesite niz [%d] = ", i);
        scanf("%f", &niz[i]); // Tačno
    }

    printf("\nTreci element niza je: %f", niz[2]);   // Tačno (indeksi idu od 0 do n-1)
    printf("\nCetvrti element niza je: %f", niz[3]); // Tačno


    return 0;
}
