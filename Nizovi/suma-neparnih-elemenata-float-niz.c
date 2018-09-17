#include <stdio.h>

int main(void)
{
    int i;
    float niz[7], suma = 0; // Promenljive u vezi zadatka
    
    
    for(i = 0; i < 7; i++) {
        printf("Unesite niz[%d] = ", i);
        scanf("%f", &niz[i]);
    }
    
    i = 0; // Vraćanje na vrednost 0!
    while(i < 7) {
        suma += niz[i];
        i += 2;
    }
        
    printf("Suma iznosi: %f", suma);
        
    return 0;
}
