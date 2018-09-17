#include <stdio.h>

int main(void)
{
    int i, niz[8]; // Promenljive u vezi zadatka
    
    
    for(i = 0; i < 8; i++) {
        printf("Unesite niz[%d] = ", i);
        scanf("%d", &niz[i]);
    }
    
    printf("Treci element je: %d ", niz[2]);
        
    return 0;
}
