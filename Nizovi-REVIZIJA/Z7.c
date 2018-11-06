/*
7. Uneti niz od 5 realnih brojeva i zameniti vrednosti treæem i poslednjem elementu niza, a zatim prikazati niz.
*/
#include <stdio.h>

int main(void)
{
    int i;
    float temp;
    float niz[5];

    for(i = 0; i < 5; i++)
    {
        printf("Unesite niz[%d] = ", i);
        scanf("%f", &niz[i]);
    }

    // ZAMENA MESTQ
    temp = niz[2];
    niz[2] = niz[4];
    niz[4] = temp;

    printf("\nNovi niz: ");
    for(i = 0; i < 5; i++)
        printf("\nniz[%d] = %f ", i, niz[i]); // ispis elementa

    return 0;
}
