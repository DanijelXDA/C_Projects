/*
10. Napisati program koji za unetih 6 celih brojeva, prikazivati samo one sa neparnim indeksom.
*/
#include <stdio.h>

int main(void)
{
    int i, n;
    int niz[6];

    for(i = 0; i < 6; i++)
    {
        printf("niz[%d] = ", i, niz[i]);
        scanf("%d", &niz[i]);
    }

    printf("\nElementi sa neparnim indesksom: ");
    for(i = 0; i < 6; i++)
        if(i % 2 != 0) // neparan indeks
            printf("\nniz[%d] = %d ", i, niz[i]); // ispis elementa

    return 0;
}
