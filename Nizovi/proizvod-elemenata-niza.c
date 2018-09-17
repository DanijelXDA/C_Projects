#include <stdio.h>

int main(void)
{
    int i, niz[10];
    int proizvod = 1;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &niz[i]);
        proizvod *= niz[i];
    }
    printf("\nProizvod je: %d", proizvod);

    return 0;
}

