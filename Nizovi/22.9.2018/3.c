// 3. Иницијализовати целобројни низ од 12 елемената и заменити места петом и и једанаестом елементу.
// Приказати новонастали низ.
#include <stdio.h>

int main(void)
{
    int a[12];
    int i, temp;

    printf("\nInicijalizacija elemenata niza a\n");
    for(i = 0; i < 12; i++) {
        printf("\tUnesi a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Zamena mesta 5. i 11. elementu
    temp = a[4];
    a[4] = a[10];
    a[10] = temp;

    printf("\nNovi niz a\n");
    for(i = 0; i < 12; i++) {
        printf("\ta[%d] = %d\n", i, a[i]);
    }

    return 0;
}
