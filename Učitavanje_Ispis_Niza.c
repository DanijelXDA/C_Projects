#include <stdio.h>

// Glavna (main) funkcija
int main(void) {

    int niz[10];
    int i;

    for(i = 0; i < 10; i++) // Za Učitavanje/Ispis elemenata niza najčešće koristimo for petlju
        niz[i] = i + 1; //

    printf("\nIspis elemenata niza:");
    for(i = 0; i < 10; i++) // Za Učitavanje/Ispis elemenata niza najčešće koristimo for petlju
        printf("\n\tElement niz[%d] = %d", i, niz[i]);

    return 0;
}
