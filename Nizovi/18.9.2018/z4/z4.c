/*
2. Inicijalizovati realni niz od 8 elemenata, zatim izracunati razliku svih elemenata.
Rezultat prikazati na konzoli.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;         // I UVEK MORA BITI CEO BROJ!!
    float niz[8], razlika = 0;

    for(i = 0; i < 8; i++){
        printf("Unesite niz [%d] = ", i);
        scanf("%f", &niz[i]);
    }

    razlika = niz[0];

    i = 1;
    while( i < 8) {
        razlika -= niz[i];
        i++;
    }
    printf("\nRazlika je: %f", razlika);


    return 0;
}
