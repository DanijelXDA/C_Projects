#include <stdio.h>

int main() {

    int i, brojCifara= 0, ceoBroj;
    int binarniBroj[32];

    printf("\nUnesi jedan ceo broj: ");
    scanf("%d", &ceoBroj);

    while(ceoBroj > 0) {

        if( ceoBroj % 2 == 0)
            binarniBroj[brojCifara] = 0;
        else
            binarniBroj[brojCifara] = 1;

        ceoBroj = ceoBroj / 2;
        brojCifara++;
    }

    for( i = brojCifara - 1; i >= 0; i--, brojCifara--) {

        if(brojCifara % 8 == 0)
            printf(" ");

        printf("%d", binarniBroj[i]);
    }

    return 0;
}
