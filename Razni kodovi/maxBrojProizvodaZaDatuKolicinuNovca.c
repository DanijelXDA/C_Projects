#include <stdio.h>

int main() {

    int brojProizvoda;
    int i, iznosCenaProizvodaKojiSeMoguKupitiZaDatuKolicinuNovca = 0, brojac = 0;
    float cenaProizvoda[100]; // max je 100 proizvoda/artikala
    float kolicinaNovca;

    printf("\nUnesite broj proizvoda: ");
    scanf("%i", &brojProizvoda);

    printf("\n\nUnesite kolicinu para koje imate: ");
    scanf("%f", &kolicinaNovca);

    for( i = 0; i < brojProizvoda; i++) {
        printf("\nUnesite cenu za %d. proizvod: ", i + 1);
        scanf("%f", &cenaProizvoda[i]);

        iznosCenaProizvodaKojiSeMoguKupitiZaDatuKolicinuNovca += cenaProizvoda[i];

        if( iznosCenaProizvodaKojiSeMoguKupitiZaDatuKolicinuNovca < kolicinaNovca )
            brojac++;

    }

    printf("\nMozete da kupite ukupno %d proizvoda.", brojac);

    return 0;
}
