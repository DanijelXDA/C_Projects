/*
3. Za uneti niz od n elemenata celobrojnog tipa izra�unati sumu svih elemenata u nizu i prikazati sumu na ekran.
*/
#include <stdio.h>

int main(void)
{
    int i, n, suma = 0; // MORA SUMA = 0 jer je 0 neutralan �lan sabiranja
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
