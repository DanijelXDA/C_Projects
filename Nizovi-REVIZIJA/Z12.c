/*
12. Za uneti niz od n elemenata celobrojnog tipa odrediti sumu elemenata u nizu.
*/
#include <stdio.h>

int main(void)
{
    int i, n, suma = 0; // MORA SUMA = 0 jer je 0 neutralan clan sabiranja
    int niz[50];

    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Unesite niz[%d] = ", i);
        scanf("%d", &niz[i]);
        suma += niz[i]; // sabiranje
    }
    printf("\nSuma unetih elemenata iznosi: %d", suma);

    return 0;
}
