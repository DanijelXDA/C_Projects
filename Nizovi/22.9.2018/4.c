// 4. Иницијализовати целобројни низ од 7 елемента. Сабрати све елементе низа.
// Резултат приказати на конзоли.
#include <stdio.h>

int main(void)
{
    int a[7];
    int i, suma = 0;

    printf("\nInicijalizacija elemenata niza a\n");
    for(i = 0; i < 7; i++) {
        printf("\tUnesi a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 7; i++) { // Sabiranje elemeneta
        suma += a[i];
    }

    printf("\nSuma: %d\n", suma);

    return 0;
}
