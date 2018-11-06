/*
11. Napisati program koji za unetih 8 celih brojeva, prikazivati samo one sa parnim indeksom.
*/
#include <stdio.h>

int main(void)
{
    int i, n;
    int niz[8];

    for(i = 0; i < 8; i++)
    {
        printf("niz[%d] = ", i, niz[i]);
        scanf("%d", &niz[i]);
    }

    printf("\nElementi sa parnim indesksom: ");
    for(i = 0; i < 8; i++)
        if(i % 2 == 0) // paran indeks
            printf("\nniz[%d] = %d ", i, niz[i]); // ispis elementa

    return 0;
}
