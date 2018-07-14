#include <stdio.h>

int main(void)  {
    // Definicija i inicijalizacija lokalne promenljive
    int a = 100;

    // Ispitujemo da li je promenljiva a jednaka 10
    if( a == 10 ) { // 100 nije jednako 10
        printf("Vrednost promenljive a je 10\n");
    }
    else if( a == 20 ) { // Ni ovaj uslov nije ispunjen
        printf("Vrednost promenljive a je 20\n");
    }
    else if( a == 30 ) {
         // Ni ovaj uslov nije ispunjen i izvršava se else deo
        printf("Vrednost promenljive a je 30\n");
    }
    else {
        // Nijedan od prethodnih uslova nije ispunjen i izvršava se else deo
        printf("Vrednost promenljive a nije nijedna od trazenih.\n");
    }

    printf("\nVrednost promenljive a iznosi: %d\n\n", a);

    return 0;
}
