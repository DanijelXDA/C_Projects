#include<stdio.h> // Ukljucivanje standardne biblioteke

#define MAX 100 // Definisanje MAX vrednosti

int main(void) // Glavna funkcija programa
{
	int niz[MAX], i, n, k, broj; // Definisanje promenljivjih

	printf("Unesite broj elemenata niza: "); // Poruka korisniku da unese broj elemenata niza
	scanf("%d", &n);                         // Ucitavanje broja elemenata niza

	printf("Koji broj hocete da ubacite? "); // Poruka korisniku da unese broj koji zeli da ubaci u dati niz
	scanf("%d", &broj);                      // Ucitavanje promenljive broj


    do          // Do while(); petlja
	{
	    printf("Na koje mesto zelite da ubacite broj %d\n", broj); // Poruka korisniku
        scanf("%d", &k);                                           // Ucitavanje broja k
	}
	while(k > n - 1); // Zavrsetak Do while(); petlje

	for(i=0; i < n; i++) // for() {} petlja, krecemo ucitavanje elemenata niza, pocevsi od vrednosti 0 do vrednosti n-1
	{
		printf("Unesite vrednost niz[%d]= ", i); // Poruka korisniku da unese vrednost za dati element niza
		scanf("%d", &niz[i]);                    // Ucitavanje elemenata datog niza
	}


		for( i = n-1; i > k; i--)             // Oslobadjanje prostora za unos broja za dati indeks u nizu
            niz[i] = niz[i-1];               // Pomeranje elemenata niza za jedno mesto udesno

        niz[k] = broj;                       // Dodeljivanje vrednosti broj u promenljivu na mestu k


	for(i=0; i < n; i++)
        printf("\nNiz[%d]= %d", i, niz[i]);

    return 0;

}
