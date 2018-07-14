#include <stdio.h>

// Glavna (main) funkcija
int main(void) {

    int brojevi[10]; // Definicija celobrojnog niza
    int i;           // Pomoćna promenljiva za for petlju

    for(i = 0; i < 10; i++)       // Za Učitavanje/Ispis elemenata niza najčešće koristimo for petlju
        scanf("%d", &brojevi[i]); // scanf() je manje-više isti, sem što pišemo &brojevi[i]
                                  // Zašto [i], zato jer brojač for petlje iterira (uvećava se)
                                  // Od 0 pa do n - 1 (u ovom slučaju 10)
                                  // A mi moramo da redom učitavamo elemente niza
                                  // brojevi[0], brojevi[1], ... , brojevi[9]

    return 0;
}  
