/*
8. Uneti niz od 12 celih brojeva i zameniti vrednosti šestom i osmom elementu niza, a zatim prikazati niz.
*/
#include <stdio.h>

int main(void)
{
    int i;
    int temp;
    int niz[12];

    for(i = 0; i < 12; i++)
    {
        printf("Unesite niz[%d] = ", i);
        scanf("%d", &niz[i]);
    }

    // ZAMENA MESTQ
    temp = niz[5];
    niz[5] = niz[7];
    niz[7] = temp;

    printf("\nNovi niz: ");
    for(i = 0; i < 12; i++)
        printf("\nniz[%d] = %d ", i, niz[i]); // ispis elementa

    return 0;
}
