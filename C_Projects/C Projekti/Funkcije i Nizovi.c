#include<stdio.h>

#define MAX 100

int funkcijaIzbor();

int odredjivanjeBrojaElemenataNiza();

void formiranjeNiza(int [], int);

void rotiranjeElemenata(int [], int);

void invertovanjeElemenata(int [], int);

void sortiranjeElemenata(int [], int);

void prikazNiza(int [], int);

void bubbleSort(int [], int);

void insertionSort(int [], int);

void funkcijaPozivanje(int [], int, int);


int main(void)
{
    int izbor, n, niz[MAX];

    izbor = funkcijaIzbor();


    // odredjivanjeBrojaElemenataNiza(&n); /* Prikazuje se vrednost variable koja se razlikuje od one koju je korisnik prethodno uneo */

    n = odredjivanjeBrojaElemenataNiza(); // Dok ovo radi, bez problema

    // printf("%d", n);

    formiranjeNiza(niz, n);

    funkcijaPozivanje(niz, n, izbor);

    prikazNiza(niz, n);


    return 0;
}

int funkcijaIzbor()
{
    int izbor;

    do
    {
        printf("\nIzaberite:\n1. Rotiranje elemenata niza\n2. Invertovanje elemenata niza\n3. Sortiranje elemenata niza\n4. Bubble Sort\n5. Insertion Sort\n\nVas izbor je: ");
        scanf("%d", &izbor);
    } while(izbor != 1 && izbor != 2 && izbor != 3 && izbor != 4 && izbor != 5);

    return izbor;
}

int odredjivanjeBrojaElemenataNiza()
{
    int n;

     do
    {
        printf("\nUnesite broj elemenata niza: ");
        scanf("%d", &n);
    } while(n<0);

    return n;
}

void formiranjeNiza(int niz[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nniz[%d] = ", i);
        scanf("%d", &niz[i]);
    }

    return;
}

void rotiranjeElemenata(int niz[], int n)
{
    int i, pom;

    pom = niz[0];

    for(i = 0; i < n; i++)
        niz[i] = niz[i+1];

    niz[n-1] = pom;

    return;
}

void invertovanjeElemenata(int niz[], int n)
{
    int i, pom;

    for(i = 0; i < n / 2; i++)
    {
        pom = niz[i];
        niz[i] = niz[n-1-i];
        niz[n-1-i] = pom;
    }

    return;
}

void sortiranjeElemenata(int niz[], int n)
{
    int i, j, pom;

    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(niz[i] > niz[j])
            {
                pom = niz[i];
                niz[i] = niz[j];
                niz[j] = pom;
            }

    return;
}

void prikazNiza(int niz[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("\nniz[%d] = %d", i, niz[i]);

    return;
}
void prikazNiza(int [], int);

void bubbleSort(int niz[], int n)
{
    int dalje, i, j, pom;

    for(dalje = 1, i = 0; i < n - 1 && dalje; i++)
        for(dalje = 0, j = n - 1; j > i; j--)
            if(niz[j-1] < niz[j])
                {
                    pom = niz[j-1];
                    niz[j-1] = niz[j];
                    niz[j] = pom;
                    dalje = 1;
                }

    return;
}

void insertionSort(int niz[], int n)
{
    int i, j, pom;

    for( i = 1; i < n; i++)
        for(j = i - 1; j >= 0 && niz[j] > niz[j+1]; j--)
            {
                pom = niz[j];
                niz[j] = niz[j+1];
                niz[j+1] = pom;
            }

    return;
}

void funkcijaPozivanje(int niz[], int n, int izbor)
{

    if(izbor == 1)
        rotiranjeElemenata(niz, n);
    else if(izbor == 2)
        invertovanjeElemenata(niz, n);
    else if(izbor == 3)
        sortiranjeElemenata(niz, n);
    else if(izbor == 4)
        bubbleSort(niz, n);
    else
        insertionSort(niz, n);

    return;
}
