/*
2. Inicijalizovati niz koji se sastoji od sledeæih vrednosti {1, 5, 6, 9, 12, 15, 7, 3}.
   Prikazati sve elemente niza na ekran.
*/
#include <stdio.h>

int main(void)
{
    int i;
    int niz[] = {1, 5, 6, 9, 12, 15, 7, 3};

    for(i = 0; i < 8; i++)
    {
        printf("niz[%d] = %d\n", i, niz[i]); // ispis elementa
    }

    return 0;
}
