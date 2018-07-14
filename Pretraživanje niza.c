#include <stdio.h>
#define MAX 50 // Maksimalna veličina niza

int main(void)
{
    int niz[MAX]; // Deklaracija celobrojnog niza od 50 elemenata
    int i, n, broj, nePostoji = -1;    // Promenljive u vezi zadatka

    // Zaštita od unosa pogrešnog broja
    do {
        printf("\nUnesite velicinu niza: ");
        scanf("%d", &n);
    } while( n < 1 || n > MAX ); // Veličina niza ne može da bude negativna ili veća od 50

    printf("\nUnos elemenata niza\n");

    for ( i = 0; i < n; i++ ) { // Učitavanje elemenata niza
        printf("\tElement[%d] = ", i);
        scanf("%d", &niz[i]);
    }

    printf("\nUnesite koji broj trazite u nizu: ");
    scanf("%d", &broj); // Koji se broj traži u nizu

    for(i = 0; i < n; i++)
        if( broj == niz[i] ) { // Tražimo svako pojavljivanje traženog broja u nizu
            printf("\nTrazeni element u nizu se nalazi na poziciji sa indeksom: %d\n", i);
            nePostoji = 0;
        }

    if( nePostoji == -1 ) // Ako nije pronađen traženi broj ispiši poruku
        printf("\n\tTrazeni element se ne nalazi u nizu.\n");


    return 0;
}
