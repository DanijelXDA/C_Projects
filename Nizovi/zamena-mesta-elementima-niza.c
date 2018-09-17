#include <stdio.h>

int main(void)
{
    int i, niz[5], temp; // Promenljive u vezi zadatka
    
    
    for(i = 0; i < 5; i++) {
        printf("Unesite niz[%d] = ", i);
        scanf("%d", &niz[i]);
    }
    
    printf("\nUneti niz: ");
    for(i = 0; i < 5; i++)
        printf("%d ", niz[i]);
        
    // Zamena mesta drugom i četvrtom elementu u nizu
    temp = niz[1];
    niz[1] = niz[3];
    niz[3] = temp;
    
    printf("\nNovi niz:  ");
    for(i = 0; i < 5; i++)
        printf("%d ", niz[i]);
        
    return 0;
}


