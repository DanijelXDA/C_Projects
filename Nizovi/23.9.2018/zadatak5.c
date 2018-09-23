// 5. Иницијализовати низ реалних бројева од 5 елемената. 
// Израчунати квадратни корен трећем елементу у низу и резултат приказати на конзоли.

#include <stdio.h>
#include <math.h> // Jer koristimo funkciju sqrt(...)

int main(void)
{
    int i; // Uvek je ceo broj (brojac petlje)
    float a[5];
    
    for(i = 0; i < 5; i++) { // Ucitavanje elemenata niza
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
    
    printf("\nKvadratni koren elementa a[2] je = %.2f", sqrt( a[2] ));

    return 0;
}
