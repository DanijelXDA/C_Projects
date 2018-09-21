#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, niz[11];
    printf("\nUnesite broj elemenata u nizu: ");

    for(i = 0; i < 11; i++){
        printf("Unesite niz [%d] = ", i);
        scanf("%d", &niz[i]);
    }
    printf("Sesti element je: %d", niz[1]);
    return 0;
}
