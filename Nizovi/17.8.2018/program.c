#include <stdio.h>

int main(void)
{
    int i, n, niz[11];

    for(i = 0; i < 11; i++)
    {
        printf("Unesite niz [%d] = ", i);
        scanf("%d", &niz[i]);
    }

    printf("\nSesti element je: %d", niz[5]);
    return 0;
}
