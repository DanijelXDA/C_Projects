#include <stdio.h>

int main(void)
{
    int broj = 5;
    int *pok = &broj;

    printf("Vrednost promenljive broj: %d\n", broj);

    broj = 10;
    printf("Vrednost promenljive broj posle broj = 10 je: %d\n", broj);

    *pok = 15;
    printf("Vrednost promenljive broj posle *pok = 15 je: %d\n", broj);

    return 0;
}
/*
broj = 25;
*pok = 25;

 broj *= 2;
 *pok *= 2;
 */
