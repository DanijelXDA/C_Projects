#include <stdio.h>

int main(void)
{
    int a[10], i, indeks = -1, datiBroj;

    for(i = 0; i < 10; i++) {
        printf("Unesi a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nUnesi koji broj trazis u nizu: ");
    scanf("%d", &datiBroj);

    for(i = 0; i < 10; i++) {
        if( a[i] == datiBroj )
            indeks = i;
    }

    if(indeks >= 0)
        printf("\nTrazeni broj se nalazi u nizu sa indeksom %d", indeks);
    else
        printf("\nTrazeni broj ne postoji u nizu!");

    return 0;
}
