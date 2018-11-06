/*
4. Za uneti niz od n elemenata realnog tipa float izraèunati sumu svih elemenata elemenata u nizu i prikazati sumu na ekran.
*/
#include <stdio.h>

int main(void)
{
    int i, n;
    float suma = 0; // MORA SUMA = 0 jer je 0 neutralan èlan sabiranja
    float niz[50];

    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Unesite niz[%d] = ", i);
        scanf("%f", &niz[i]);
        suma += niz[i]; // sabiranje
    }
    printf("\nSuma unetih elemenata iznosi: %f", suma);

    return 0;
}
