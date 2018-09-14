#include <stdio.h>

int main(void)
{
    // Promenljive u vezi zadatka
    int niz[5]; // Deklaracija celobrojnog niza
    int n; // Promenljiva u kojoj čuvamo veličinu niza
    int i; // Promenljiva za for() petlju
    int temp; // Promenljiva koja privremeno čuva vrednost elementa niza


    printf("Unos elemenata niza\n");
    for(i = 0; i < 5; ++i)
    {
        printf("\tUnesite vrednost niz[%d] = ", i); // Ispis da se unese element
        scanf("%d", &niz[i]); // Učitavanje elementa niza
    }

    // Pre zamene niz izgleda
    printf("\nUneti niz: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d  ", niz[i]);
    }

    // Zamena mesta 2. i 4. elementu u nizu
    temp = niz[1]; // Čuvamo vrednost 2. elementa u nizu
    // da ne bi izgubili njegovu vrednost pri upisu 4. elementa
    // na njegovo mesto

    niz[1] = niz[3]; // 4. element u nizu upisujemo na mesto 2. elementa

    niz[3] = temp; // 2. element upisujemo na mesto 4. elementa u nizu


    printf("\nNovi  niz: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d  ", niz[i]);
    }

    return 0;
}
