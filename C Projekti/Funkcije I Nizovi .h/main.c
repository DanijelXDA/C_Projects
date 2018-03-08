#include <stdio.h>
#include "funkcijeINizovi.h"

#define MAX 100

int main(void)

{
    int izbor, n, niz[MAX];

    izbor = funkcijaIzbor();


    odredjivanjeBrojaElemenataNiza(&n); /* Prikazuje se vrednost variable koja se razlikuje od one koju je korisnik prethodno uneo */

    //n = odredjivanjeBrojaElemenataNiza(); // Dok ovo radi, bez problema

    printf("%d", n);

    formiranjeNiza(niz, n);

    funkcijaPozivanje(niz, n, izbor);

    prikazNiza(niz, n);


    return 0;
}
