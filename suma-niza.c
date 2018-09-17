#include <stdio.h>

int main(void)
{
    int i, n, niz[25], suma = 0; // Promenljive u vezi zadatka
    
    printf("Unesite velicinu niza: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("Unesite niz[%d] = ", i);
        scanf("%d", &niz[i]);
        suma = suma + niz[i]; // Racunanje sume elemenata u nizu
    }
    
    printf("Suma elemenata niza je: %d\n", suma);
    printf("Broj elemenata niza je: %d", n);

    return 0;
}
