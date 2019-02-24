#ifndef EVIDENCIJAKOSARKASA_H_INCLUDED
#define EVIDENCIJAKOSARKASA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxImeIPrezime 20
#define maxImeKluba 30
typedef struct
{
    int sifra,brojPoena,brojUtakmica;
    char ime[maxImeIPrezime];
    char prezime[maxImeIPrezime];
    char klub[maxImeKluba];
}Kosarkas;

void UcitajKosarkase();
int menu();
void dodajKosarkasa();
void dodajPoeneIUtakmicu();
void ispisKosarkasa();
void spisakKosarkasa();

#endif // EVIDENCIJAKOSARKASA_H_INCLUDED
/**

Preporuka: kod unosa novog kosarkasa napraviti kontrolu
unosa broja utakmica i poena da ne bude nesto
osim celobrojnog tipajeste samo je to na jednom mestu
u Opisu izostavljeno a gore u telu zadatka jeste navedeno
i dole u primerima
izvinjavamo se, desava se

**/
