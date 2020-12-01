#include <stdio.h>
#include <string.h>

#define MAX_SIZE 30

void unos_niza(char *);
unsigned mala_slova(char *);
unsigned brisanje_razmaka(char *, char *, const unsigned);
void palindrom(const char *, const unsigned);

int main(void) {

  char niz[MAX_SIZE], b[MAX_SIZE] = "";

  unos_niza(niz);
  unsigned velNiza = mala_slova(niz);
  unsigned staraVel = brisanje_razmaka(niz, b, velNiza);
  palindrom(b, staraVel);

  return 0;
}

void unos_niza(char *niz) {
  printf("Unesi string: ");
  // __fpurge(stdin); nema potrebe unosi se samo jedan string
  scanf("%[^\n]s", niz); // moze i fgets ali nije preporucljivo, ovo je magican trik za scanf da cita ceo red ;)
}

unsigned mala_slova(char * niz) {
  int i = 0; // sreco moja i moras podesiti na pocetnu vrednost! :D proslo: int i;

  while (niz[i] != '\0') {
    if (niz[i] >= 'A' && niz[i] <= 'Z')
            niz[i] += 32;
      // samo ako je slovo i++; ili mora svakako i++? 
     i++;
  }
  return i;
}

unsigned brisanje_razmaka(char *niz, char *b, const unsigned duzina) {
  int i, j = 0;

  for (i = 0; i < duzina; i++) {
    if ( (niz[i] != ' ') && (niz[i] != '\t') ) // da li treba da bude znak jednak razmaku da bi ga kopirala ili razlicit?
    { // izmena uslova
      b[j] = niz[i];
      j++;
    }
  }
  b[j] = '\0';

  return j;
}

void palindrom(const char * b, const unsigned staraVel) {
  int i, j;
  int nijepalindrom = 1;

  for (i = 0, j = staraVel - 1; i < staraVel / 2; i++, j--) {
    if (b[i] != b[j]) {
        nijepalindrom = 0; // OPET KAZES INT NIJEPALINDROM = 0; redeklaracija -> pucanje bazukom u nogu
    }
  }

  if (!nijepalindrom) 
    printf("String nije palindrom\n");
  else 
    printf("String je palindrom\n");

}
