#include <stdio.h>
#define MAX 50 // Maksimalna veličina niza

int main(void)
{
    int niz[MAX];   // Deklaracija celobrojnog niza od 50 elemenata
    int i, n, k;    // Promenljive u vezi zadatka

    do {                          // Zaštita od unosa pogrešnog broja
        printf("\nUnesite velicinu niza: ");
        scanf("%d", &n);
    } while( n < 1 || n > MAX ); // Veličina niza ne može da bude negativna ili veća od 50

    do {                             // Zaštita od unosa pogrešnog broja
        printf("\nUnesite sa koje pozicije u nizu izbacujete element: ");
        scanf("%d", &k);
    } while( k < 0 || k > n - 1 ); // Indeks niza ne može da bude negativan ili veći od n-1

    printf("\nUnos elemenata niza\n");
    for ( i = 0; i < n; i++ ) { // Učitavanje elemenata niza
        printf("\tElement[%d] = ", i);
        scanf("%d", &niz[i]);
    }
    // Izbacivanje sa k-te pozicije
    for( i = k; i < n - 1; i++) // Krećemo od k-te pozicije i redom vršimo
        niz[i] = niz[i + 1];   // Rotiranje elemenata niza ulevo za jedno mesto

    n--;                    // Pošto smo izbacili jedan element i veličina niza
                           // se smanjila za 1


    printf("\nNakon izbacivanja elementa sa k-te pozicije u nizu izgleda\n");
    for( i = 0; i < n; i++)
        printf("\tElement[%d] = %d\n", i, niz[i]);

    return 0;
}
