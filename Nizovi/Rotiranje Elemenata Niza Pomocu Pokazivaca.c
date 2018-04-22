#include <stdio.h>
#define MAX 25

int main(void)

{
    int niz[MAX], p1, *p2, n, i, *m, *m2;

    printf("Unesite broj elemenata niza:");
    scanf("%d", &n);

    for(m=niz, i=0; m < (m+n), i<n; m++, i++)
    {
    printf("\nUnesite vrednost elementa niz[%d]= ", i);
    scanf("%d", m);
    }

    p2 = niz+n/2;

    for(m = niz, m2 = niz+n-1; m < p2, m2 > p2; m++, m2--)
    {
        p1 = *m;
        *m = *m2;
        *m2 = p1;
    }

    for(m = niz, i=0; m < (niz+n); m++, i++)
    printf("\nVrednost elementa niz[%d]= %d", i, *m);


    return 0;
}
