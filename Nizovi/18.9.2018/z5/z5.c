/*
3. Napisati program koji učitava n elemenata celobrojnog niza,
a zatim prebraja i ispisuje koliko u datom nizu ima parnih a koliko neparnih brojeva.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n, parni = 0, neparni = 0;
    int niz[50];

    printf("Unesi broj clanova niza: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Unesite niz[%d] = ", i);
        scanf("%d", &niz[i]);
    }


    for(i = 0; i < n; i++) {
        if( (niz[i] % 2) == 0 ) { // Da li je broj paran
            parni++;
        }
        else {
            neparni++;
        }
    }


    printf("\nParnih brojeva je: %d, a neparnih %d", parni, neparni);

    return 0;
}
