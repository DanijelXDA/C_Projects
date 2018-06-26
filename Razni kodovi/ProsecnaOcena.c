#include <stdio.h>

int main() {

    int i, brojUcenika = 0;
    float prosecnaOcena;
    float ocene[5];

    for( i = 0; i < 5; i++) {
        printf("\nUnesite broj ucenika koji imaju ocenu %d :  ", i);
        scanf("%f", &ocene[i]);

        brojUcenika += ocene[i]; // sabira se ukupan broj ucenika
    }

    prosecnaOcena = ( (ocene[0] * 1.00) + (ocene[1] * 2.00) + (ocene[2] * 3.00)
    + (ocene[3] * 4.00) + (ocene[4] * 5.00) ) / brojUcenika;

    printf("\nProsecna ocena je: %.2f, a ucenika je %d.\n", prosecnaOcena, brojUcenika);
    return 0;
}
