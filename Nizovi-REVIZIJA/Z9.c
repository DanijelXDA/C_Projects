/*
9. Uneti niz od N realnih brojeva i zameniti vrednosti prvom i poslednjem elementu niza, a zatim prikazati niz.
*/
#include <stdio.h>

int main(void)
{
    int i, n;
    float temp;
    float niz[50];

    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Unesite niz[%d] = ", i);
        scanf("%f", &niz[i]);
    }

    // ZAMENA MESTQ
    temp = niz[0];
    niz[0] = niz[n - 1];
    niz[n - 1] = temp;

    printf("\nNovi niz: ");
    for(i = 0; i < n; i++)
        printf("\nniz[%d] = %f ", i, niz[i]); // ispis elementa

    return 0;
}
