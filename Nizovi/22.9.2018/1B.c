// 1. Иницијализовати целобројни низ од 25 елемената.
//    Исписати све елементе овог низа.
#include <stdio.h>

int main(void)
{
    int a[25];
    int i;

    for(i = 0; i < 25; i++) {
        a[i] = i + 1;
    }

    printf("\nPrikaz elemenata niza a\n");
    for(i = 0; i < 25; i++) {
        printf("\ta[%d] = %d\n", i, a[i]);
    }

    return 0;
}
