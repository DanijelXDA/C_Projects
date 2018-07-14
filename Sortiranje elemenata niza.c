#include <stdio.h>
#define MAX 50 // Maksimalna veličina niza

int main(void)
{
    int niz[MAX]; // Deklaracija celobrojnog niza od 50 elemenata
    int i, j, n, temp;    // Promenljive u vezi zadatka

    do {                         // Zaštita od unosa pogrešnog broja
        printf("\nUnesite velicinu niza: ");
        scanf("%d", &n);
    } while( n < 1 || n > MAX ); // Veličina niza ne može da bude negativna ili veća od 50

    printf("\nUnos elemenata niza\n");

    for ( i = 0; i < n; i++ ) { // Učitavanje elemenata niza
        printf("\tElement[%d] = ", i);
        scanf("%d", &niz[i]);
    }

    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if( niz[i] > niz[j] ) { // Znak < ili > određuje da li sortiramo rastuće ili opadajuće
                temp = niz[i];      // Znak > za rastući poredak
                niz[i] = niz[j];    // Znak < za opadajući poredak
                niz[j] = temp;
            }
    
    printf("\nNakon sortiranja niz izgleda\n");
    
    for( i = 0; i < n; i++)
        printf("\tElement[%d] = %d\n", i, niz[i]);

    return 0;
}
