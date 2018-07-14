#include <stdio.h>
#define MAX 50 // Maksimalna veličina niza

int ucitajN(void) {
    int n;
    do {                          // Zaštita od unosa pogrešnog broja
        printf("\nUnesite velicinu niza: ");
        scanf("%d", &n);
    } while( n < 1 || n > MAX ); // Veličina niza ne može da bude negativna ili veća od 50
    return n;
}

void ucitajNiz(int n, int niz[]) {
    int i;
    printf("\nUnos elemenata niza\n");
    for ( i = 0; i < n; i++ ) { // Učitavanje elemenata niza
        printf("\tElement[%d] = ", i);
        scanf("%d", &niz[i]);
    }
    return;
}

int pronadjiMax(int n, int niz[]) {
    int i, max = niz[0]; // Pretpostavljamo da je trenutni najveći element na prvoj poziciji
    for(i = 1; i < n; i++)
            if( niz[i] > max ) // Ako je trenutni element veći od max
                max = niz[i];  // On sada postaje max
    return max;
}

int main(void) {
    int niz[MAX], i, n, max;

    n = ucitajN(); // Funkcija koja učitava veličinu niza
    ucitajNiz(n, niz); // // Funkcija koja učitava elemente niza
    max = pronadjiMax(n, niz); // Funkcija koja pronalazi najveći element u nizu
    printf("\n\nNajveci element u nizu ima vrednost %d\n", max);

    return 0;
}
