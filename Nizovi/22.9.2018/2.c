// 2. Иницијализовати целобројни низ од 17 елемената и сабрати сваки елемент са
// непарним индексом. Приказати суму.
#include <stdio.h>

int main(void)
{
    int a[17];
    int i, suma = 0;

    printf("\nInicijalizacija elemenata niza a\n");
    for(i = 0; i < 17; i++) {
        printf("\tUnesi a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 17; i++) { // Sabiranje elemeneta sa neparnim indeksom
        if( (i % 2) != 0 ) // Neparan indeks
            suma += a[i];
    }

    printf("\nSuma: %d\n", suma);

    return 0;
}
