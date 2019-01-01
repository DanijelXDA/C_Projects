#include "Bombone.h"

int brojBombonaPoVrsti(int matrica[][MAX], int n, int pozicija)
{
    int zbir = 0, i, j;

    for(i = pozicija; i <= pozicija; i++)
        for(j = 0; j < n; j++)
            zbir += matrica[i][j];

    return zbir;
}

int brojBombonaPoKoloni(int matrica[][MAX], int n, int pozicija)
{
    int zbir = 0, i, j;

    for(i = 0; i < n; i++)
        for(j = pozicija; j <= pozicija; j++)
            zbir += matrica[i][j];

    return zbir;
}

int brojBombonaPoGlavnojDijagonali(int matrica[][MAX], int n)
{
    int zbir = 0, i;

    for(i = 0; i < n; i++)
        zbir += matrica[i][i];

    return zbir;
}

int brojBombonaPoSporednojDijagonali(int matrica[][MAX], int n)
{
    int zbir = 0, i;

    for(i = 0; i < n; i++)
        zbir += matrica[i][n - 1 - i];

    return zbir;
}
