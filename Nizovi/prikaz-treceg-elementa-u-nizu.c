#include <stdio.h>

int main(void)
{
    // Promenljive u vezi zadatka
    int niz[8]; // Deklaracija celobrojnog niza
    int i; // Promenljiva za for() petlju

    printf("Unos elemenata niza\n");
    for(i = 0; i < 8; ++i)
    {
        printf("\tUnesite vrednost niz[%d] = ", i); // Ispis da se unese element
        scanf("%d", &niz[i]); // Učitavanje elementa niza
    }

    printf("\nTreci element je: %d", niz[2]);

    return 0;
}
