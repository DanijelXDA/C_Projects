#include <stdio.h>

int main(void)
{
     // Promenljive u vezi zadatka
     int suma = 0; // Mora da se inicjalizuje sa nulom
     // da ne bi došlo do upisa nasumične vrednosti!

     int celobrojniNiz[50]; // Deklaracija celobrojnog niza
     // Pretpostavljamo da niz neće imati više od 50 elemenata

     int n; // Promenljiva u kojoj čuvamo veličinu niza

     int i; // Promenljiva za for() petlju


     // Unos koliko ima elemenata u nizu
     do {
        printf("\nUnesite koliko elemenata ima niz ( n > 1, n < 50): ");
        scanf("%d", &n);
     } while( ( n < 1 ) || ( n > 50 ) ); // Broj elemenata u nizu ne može biti negativan ili veći od maksimuma

     printf("\nUnos elemenata niza\n");
     for(i = 0; i < n; ++i) {
        printf("\tUnesite vrednost niz[%d] = ", i); // Ispis da se unese element
        scanf("%d", &celobrojniNiz[i]); // Učitavanje elementa niza

        suma += celobrojniNiz[i]; // Sabiranje elemenata niza
     }

     printf("\n\nNiz ima %d elemenata.\nSuma elemenata unetog niza iznosi: %d\n\n", n, suma);


     return 0;
}
