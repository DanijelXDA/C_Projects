#include <stdio.h>

int main(void)
{
    int i;
    float racun[5] = {1000.0, 2.0, 3.4, 17.0, 50.0}; // Niz realnih brojeva od 5 elemenata
    float *pok;

    pok = racun; // Pokazivaču dodeli adresu prvog elementa u nizu

    printf("Vrednosti niza prikazane pomocu pokazivaca\n");
    for ( i = 0; i < 5; i++ ) {
        printf("\t*(pok + %d) : %.2f\n",  i, *(pok + i) );
    }

    return 0;
}
