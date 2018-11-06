/*
1. Inicijalizovati niz Y od 3 realna broja, float Y[3] = {5.55, 6.66, 7.77};
   Svaki element uveæati za dva puta i prikazati taj niz nakon uveæanja na ekran.
*/
#include <stdio.h>

int main(void)
{
    int i;
    float Y[] = {5.55, 6.66, 7.77};

    for(i = 0; i < 3; i++)
    {
        Y[i] *= 2; // uvecavanje 2 puta
        printf("Y[%d] = %f\n", i, Y[i]); // ispis uvevcanog elementa
    }

    return 0;
}
