#include <stdio.h>

int main()
{

    int n, i, a[30], parni = 0, neparni = 0;

    printf("Unesite broj n (broj elemenata niza): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nUnesite a[%d] = ", i);
        scanf("%d", &a[i]);

        if( a[i] % 2 == 0 )
            parni++;
        else
            neparni++;
    }

    printf("\nBroj parnih brojeva je %d, a neparnih %d.", parni, neparni);

    return 0;
}
