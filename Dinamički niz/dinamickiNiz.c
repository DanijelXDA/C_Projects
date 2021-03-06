#include "dinamickiNiz.h"

void unesiElementeNiza(int *niz, int n)
{
    int i;

    printf("Unesite elemente niza\n>> ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", niz + i);
    }
}

int *kreirajDinamickiNiz(int *niz, int velicina)
{
    int i;

    niz = (int *) malloc(velicina * sizeof(int) );

    for(i = 0; i < velicina; i++)
        *(niz + i) = 0;

    if(niz == NULL)
        return NULL;
    else
    {
        printf("\n\n");
        unesiElementeNiza(niz, velicina);
    }

    return niz;
}

void oslobodiDinamickiKreiraniNiz(int *niz, int *duzina)
{
    if(niz != NULL)
    {
        free(niz);
        niz = NULL;
        *duzina = 0;
    }

    return;
}

int *dodajElementNaKrajNiza(int *niz, int *duzina, int element)
{
    if(niz == NULL)
        return NULL;
    else
    {
        (*duzina)++;

        niz = (int *) realloc(niz, (*duzina) * sizeof(int));

        if(niz == NULL)
            return NULL;
        else
            niz[(*duzina - 1)] = element;
    }

    return niz;
}

void prikazDinamickogNiza(int *niz, int duzina)
{
    int i;

    printf("\nPrikaz niza\n>> ");
    for(i = 0; i < duzina; i++)
        printf("%d ", *(niz + i));

    return;
}

int *obrisiElementSaPozicije(int *niz, int *duzina, int pozicija)
{
    if(pozicija == (*duzina - 1))
    {
        (*duzina)--;
        niz = (int *) realloc(niz, (*duzina) * sizeof(int));
    }
    else // pomeranje ulevo
    {
        int i;

        for(i = pozicija; i < *duzina; i++)
            niz[i] = niz[i + 1];

        (*duzina)--;
        niz = (int *) realloc(niz, (*duzina) * sizeof(int));

    }
    return niz;
}


int *obrisiElementVrednost(int *niz, int *duzina, int vrednost) // FIXED!
{
    int i;

    for(i = 0; i < *duzina; i++)
        if(niz[i] == vrednost)
        {
            niz = obrisiElementSaPozicije(niz, duzina, i);
            i--; // BUGFIX: NOW FUNCTION DELETES EVERY REQUESTED VALUE!
        }

    return niz;
}

int *dinamickiNizProstihBrojeva(int *niz, int *duzina)
{

    int *tmp = (int *) calloc(*duzina, sizeof(int));

    if (tmp == NULL)
        return NULL;
    else
    {
        int i, j = 0;

        for(i = 0; i < *duzina; i++)
        {
            int brDelilaca = 1, d;

            for(d = 2; d <= niz[i]; d++)
                if(niz[i] % d == 0)
                    brDelilaca++;

            if(brDelilaca == 2 && niz[i] > 1)
            {
                tmp[j] = niz[i];
                j++;
            }
        }

        (*duzina) = j;
        tmp = (int *) realloc(tmp, j * sizeof(int));

        return tmp;
    }
}

int testScenario()
{
    int *niz = NULL, velicina, element, pozicija;

    do
    {
        printf("\nUnesite velicinu niza\n>> ");
        scanf("%d", &velicina);
    }
    while(velicina <= 1);

    niz = kreirajDinamickiNiz(niz, velicina);
    if(niz == NULL)
        return -1;
    else
    {
        printf("\n\n");
        prikazDinamickogNiza(niz, velicina);

        printf("\n\n");
        printf("\nElement koji dodajete u niz\n>> ");
        scanf("%d", &element);

        printf("\n\n");
        niz = dodajElementNaKrajNiza(niz, &velicina, element);
        prikazDinamickogNiza(niz, velicina);

        printf("\n\n");
        do {
            printf("\nUnesite sa kojeg indeksa uklanjate element\n>> ");
            scanf("%d", &pozicija);
        } while(pozicija < 0 || pozicija >= velicina);

        printf("\n\nBrisanje elementa po indeksu\n\n");
        niz = obrisiElementSaPozicije(niz, &velicina, pozicija);
        prikazDinamickogNiza(niz, velicina);

        niz = obrisiElementVrednost(niz, &velicina, 12); // npr vrednost 12
        prikazDinamickogNiza(niz, velicina);

        niz = dinamickiNizProstihBrojeva(niz, &velicina);
        prikazDinamickogNiza(niz, velicina);

        oslobodiDinamickiKreiraniNiz(niz, &velicina);

    }
    return 0;
}
