#include <stdio.h>
#include <stdlib.h>

int main() {
    int slova = 0, cifre = 0, ostaliZnakovi = 0;
    int i, duzinaReci;
    char znakovi[100];

    printf("\nUnesite koliko znakova unosite: ");
    scanf("%d", &duzinaReci);

    for( i = 0; i < duzinaReci; ++i) {
        fflush(stdin); // ciscenje bafera

        printf("\nUnesite %d. znak: ", i + 1);
        scanf("%c", &znakovi[i]);

        //da li je uneti znak malo ili veliko slovo
if( (znakovi[i] >= 'a' || znakovi[i] <= 'z') && (znakovi[i] >= 'A' || znakovi[i] >= 'Z') )
                slova++;
        // da li je cifra
        else if( znakovi[i] >= '0' && znakovi[i] <= '9' )
            cifre++;
        else
            ostaliZnakovi++;
    }

    printf("\n\nData rec ima\n\t%d slova\n\t%d cifara\n\t%d ostalih znakova\n\n",
           slova, cifre, ostaliZnakovi);

    return 0;
}
