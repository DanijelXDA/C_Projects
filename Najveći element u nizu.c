#include <stdio.h>
#define MAX 50 // Maksimalna veličina niza

int main(void)
{
    int niz[MAX]; // Deklaracija celobrojnog niza od 50 elemenata
    int i, n, max;    // Promenljive u vezi zadatka
   
    do {                          // Zaštita od unosa pogrešnog broja
        printf("\nUnesite velicinu niza: ");
        scanf("%d", &n);
    } while( n < 1 || n > MAX ); // Veličina niza ne može da bude negativna ili veća od 50

    printf("\nUnos elemenata niza\n");

    for ( i = 0; i < n; i++ ) { // Učitavanje elemenata niza
        printf("\tElement[%d] = ", i);
        scanf("%d", &niz[i]);
    }

    max = niz[0]; // Pretpostavljamo da je trenutni najveći element na prvoj poziciji
    // Može i max = *niz; (Samo ime niza je const pokazivač na prvi element u nizu) 

    for(i = 1; i < n; i++)
            if( niz[i] > max ) // Ako je trenutni element veći od max
                max = niz[i];  // On sada postaje max

    printf("\nNajveci element u nizu ima vrednost %d\n", max);

    return 0;
}
