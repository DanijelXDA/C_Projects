/*
6. Uneti niz od 7 celih brojeva i zameniti vrednosti prvom i poslednjem elementu niza, a zatim prikazati niz.
*/
#include <stdio.h>

int main(void)
{
    int i, temp;
    int niz[7];

    for(i = 0; i < 7; i++)
    {
        printf("Unesite niz[%d] = ", i);
        scanf("%d", &niz[i]);
    }

    // ZAMENA MESTQ
    temp = niz[0];
    niz[0] = niz[6];
    niz[6] = temp;

    printf("\nNovi niz: ");
    for(i = 0; i < 7; i++)
        printf("\nniz[%d] = %d ", i, niz[i]); // ispis elementa

    return 0;
}
