#include <stdio.h>

int d; // Globalna promenljiva

void saberi(int, int); // Prototip funkcije saberi()

int main(void) {
    int a, b, c; // Deklaracija i definicija lokalnih varijabli

    // Inicijalizacija varijabli
    a = 10;
    b = 20;
    c = a + b; // c = 30;

    saberi(a, c); // Poziv funkcije saberi()

    printf("\nVrednost a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    return 0;
} // Lokalne promenljive a, b i c odavde više NE POSTOJE
  // Globalna promenljiva d i dalje postoji

void saberi(int broj1, int broj2) {
    d = broj1 + broj2;
    // c = broj1; Ova naredba neće proći kompajliranje
    // jer je c lokalna promenljiva definisana u main() funkciji
    // i samo tu i važi
}
