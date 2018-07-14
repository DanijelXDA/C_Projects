#include <stdio.h>
#define MAX 50 // Maksimalna veličina niza

int main(void)
{
    int niz[MAX];          // Deklaracija celobrojnog niza od 50 elemenata
    int i, n, k,  broj;    // Promenljive u vezi zadatka

    do {                          // Zaštita od unosa pogrešnog broja
        printf("\nUnesite velicinu niza: ");
        scanf("%d", &n);
    } while( n < 1 || n > MAX ); // Veličina niza ne može da bude negativna ili veća od 50

    do {                           // Zaštita od unosa pogrešnog broja
        printf("\nUnesite na koje mesto u nizu ubacuje novi element i broj koji ubacujete: ");
        scanf("%d %d", &k, &broj);
    } while( k < 0 || k > n - 1 ); // Indeks niza ne može da bude negativan ili veći od n-1

    printf("\nUnos elemenata niza\n");
    for ( i = 0; i < n; i++ ) { // Učitavanje elemenata niza
        printf("\tElement[%d] = ", i);
        scanf("%d", &niz[i]);
    }
    // Ubacivanje na k-tu poziciju
    if ( n < MAX ) // Da li imamo dovoljno mesta u nizu za novi element
        n++;       // Uvećaj broj elemenata niza za 1

    for( i = n - 1; i > k; i--) // Pomeranje elemenata udesno za jedno mesto
        niz[i] = niz[i - 1];    // Idemo sve dok ne stignemo do k-te pozicije
    niz[k] = broj;             // Na k-tu poziciju upiši broj koji je korisnik
                               // Uneo ranije u programu

    printf("\nNakon ubacivanja elementa na k-tu poziciju niz izgleda\n");
    for( i = 0; i < n; i++)
        printf("\tElement[%d] = %d\n", i, niz[i]);

    return 0;
}
