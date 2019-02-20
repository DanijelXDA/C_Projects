/**************************************************************
***                 Danijel Jovanoviæ                       ***
***                 MIT LICENCE                             ***
***                 Copyright 2019                          ***
***                                                         ***
**************************************************************/
/*
Zadatak 1: Dinamièki nizovi

Opis: Napisati program koji uèitava niz od n celih brojeva.

Napisati funkcije za:
    1)dodavanje novog elementa u niz. Dodavanje se vrši tako što se broj elemenata niza poveca za jedan, i na poslednje mesto se postavi novi element
    2)brisanje elementa iz niza sa odreðene pozicije koja vraæa novi niz sa obrisanim elementom.
    3)brisanje svih elemenata koji imaju odreðenu vrednost.
    4)kreiranje novog niza koji sadrži samo proste brojeve.
*/


#ifndef DINAMICKINIZ_H_INCLUDED
#define DINAMICKINIZ_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void unesiElementeNiza(int *, int);
int *kreirajDinamickiNiz(int *, int);
void oslobodiDinamickiKreiraniNiz(int *, int *);
int *dodajElementNaKrajNiza(int *, int *, int);
void prikazDinamickogNiza(int *, int);
int *obrisiElementSaPozicije(int *, int *, int);
int *obrisiElementVrednost(int *, int *, int);
int *dinamickiNizProstihBrojeva(int *, int *);



int testScenario();

#endif // DINAMICKINIZ_H_INCLUDED
