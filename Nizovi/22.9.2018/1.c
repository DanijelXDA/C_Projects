// 1. Иницијализовати целобројни низ од 25 елемената.
//    Исписати све елементе овог низа.
#include <stdio.h>

int main(void)
{
    int a[25];
    int i;

    printf("\nInicijalizacija elemenata niza a\n");
    for(i = 0; i < 25; i++) {
        printf("\tUnesi a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nPrikaz elemenata niza a\n");
    for(i = 0; i < 25; i++) {
        printf("\ta[%d] = %d\n", i, a[i]);
    }

    return 0;
}
