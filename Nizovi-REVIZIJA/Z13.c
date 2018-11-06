/*
13. Za uneti niz od n elemenata celobrojnog tipa odrediti proizvod elemenata u nizu.
*/
#include <stdio.h>

int main(void)
{
    int i, n, proizvod = 1; // MORA PROIZVOD = 1 jer je 1 neutralan clan mnozenja
    int niz[50];

    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Unesite niz[%d] = ", i);
        scanf("%d", &niz[i]);
        proizvod *= niz[i]; // sabiranje
    }
    printf("\nProizvod unetih elemenata iznosi: %d", proizvod);

    return 0;
}
