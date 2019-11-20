#include <stdio.h>
#include <string.h>

struct Datum
{
    int godina, mesec, dan;
};

struct Pesma
{
    char naslov[64], izvodjac[32], kompozitor[32];
    int trajanje;
    struct Datum objavljena;
};

typedef struct
{
    struct Celija *pPrvi, *pPoslednji;
} ListaPesama_t;

typedef struct Celija
{
    struct Pesma pesma;
    struct Celija *pSledeca;
} Celija_t;

typedef struct Pesma pesma_t;

const char *DatumKaoString(struct Datum d)
{
    static char strDatum[12];
    sprintf(strDatum, "%02d/%02d/%04d", d.mesec, d.dan, d.godina);

    return strDatum;
}

void stampajPesma(const pesma_t *pPesma)
{
    int m = pPesma -> trajanje / 60;
    int s = pPesma -> trajanje % 60;

    printf("---------------------\n");
    printf("Naslov:\t %s\n", pPesma -> naslov);
    printf("Izvodjac: %s\n", pPesma -> izvodjac);
    printf("Kompozitor: %s\n", pPesma -> kompozitor);
    printf("Trajanje: %d:%02d\n", m, s);
    printf("Datum:\t %s\n", DatumKaoString(pPesma -> objavljena));
}

int main(void)
{
    pesma_t pesma1, pesma2, *pPesma = &pesma1;

    strcpy(pesma1.naslov, "Ja bih da pevam");
    strcpy(pesma1.izvodjac, "Spori ritam bend");
    strcpy(pesma1.kompozitor, "Dejan Celic");

    pesma1.trajanje = 216;
    pesma1.objavljena.godina = 1996;
    pesma1.objavljena.mesec = 6;
    pesma1.objavljena.dan = 25;

    if( (*pPesma).trajanje > 180)
        printf("Pesma \"%s\" je duza od 3 minuta\n", pPesma -> naslov);

    pesma2 = pesma2;

    stampajPesma(pPesma);

    return 0;
}
