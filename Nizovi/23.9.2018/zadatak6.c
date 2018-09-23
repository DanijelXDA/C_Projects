// 6. Иницијализовати низ реалних бројева од 6 елемената. 
// Израчунати производ унетих бројева. Резултат приказати на конзоли.

#include <stdio.h>

int main(void)
{
    int i; // Uvek je ceo broj (brojac petlje)
    float a[6], proizvod = 1;
    
    for(i = 0; i < 6; i++) { // Ucitavanje elemenata niza
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
        
        proizvod *= a[i]; // Računanje proizvoda
    }
    
    printf("\nProizvod je: %.2f", proizvod);

    return 0;
}
