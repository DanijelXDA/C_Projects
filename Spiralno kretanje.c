#include <stdio.h>
#define MAX 50 // Maksimalna veličina niza

int main(void)
{
    int matrica[MAX][MAX]; // Deklaracija kvadratne matrice maksimalne veličine 50 X 50
    int p, i, i1, i2, n, brojac = 0; // Promenljive u vezi primera

    do {
        printf("\nUnesite velicinu niza: ");
        scanf("%d", &n);
    } while( n < 1 || n > MAX );   // Veličina niza ne može da bude negativna ili veća od 50
    // Spiralno kretanje kroz kvadratnu matricu
    for( p = 0; p < n / 2; p++ )   // U kom se prstenu nalazimo
    {
        for( i = p; i < n - 1 - p; i++ ) // Vrsta gore
            matrica[p][i] = ++brojac;

        for( i = p; i < n - 1 - p; i++ ) // Kolona desno
            matrica[i][n - 1 - p] = ++brojac;

        for( i = n - 1 - p; i > p; i-- ) // Vrsta dole
            matrica[n - 1 - p][i] = ++brojac;

        for( i = n - 1 - p; i > p; i-- ) // Kolona levo
            matrica[i][p] = ++brojac;
    }
    if( n % 2 ) // Upis u centralno polje
        matrica[n / 2][n / 2] = ++brojac;

    printf("\n\nKvadratna matrica dimenzija %d X %d izlgeda:\n\n", n, n);
    for ( i1 = 0; i1 < n; i1++ ) { // Učitavanje elemenata niza
        for ( i2 = 0; i2 < n; i2++ )
            printf("%3d ", matrica[i1][i2]);
        printf("\n");
    }
    return 0;
}
