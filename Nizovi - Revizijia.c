#include <stdio.h>

int main(void)
{
    int i, j, brElem, temp;
    int niz[50];
    int broj;

    printf("Unesite od koliko se elemenata sastoji niz (max = 50): ");
    scanf("%d", &brElem);

    printf("\nUnos vrednosti elementima niza\n");
    for(i = 0; i < brElem; i++)
    {
        printf("\tUnesite niz[%d] = ", i);
        scanf("%d", &niz[i]);
    }

    printf("\n\nUneti niz: ");
    for(i = 0; i < brElem; i++)
        printf("%d ", niz[i]);

    printf("\n\nSortiranje niza (U rastucem poretku)\n");
        for(i = 0; i < brElem; i++)
            for(j = i + 1; j < brElem; j++)
                if( niz[i] > niz[j] )
                {
                    temp = niz[i];
                    niz[i] = niz[j];
                    niz[j] = temp;
                }

    printf("\tSortirani niz: ");
    for(i = 0; i < brElem; i++)
        printf("%d ", niz[i]);

    printf("\n\nSortiranje niza (U opadajucem poretku)\n");
        for(i = 0; i < brElem; i++)
            for(j = i + 1; j < brElem; j++)
                if( niz[i] < niz[j] )
                {
                    temp = niz[i];
                    niz[i] = niz[j];
                    niz[j] = temp;
                }

    printf("\tSortirani niz: ");
    for(i = 0; i < brElem; i++)
        printf("%d ", niz[i]);

    printf("\n\nPretrazivanje niza (prvo pojavljivanje)");
    printf("\nUnesite koji broj trazite u nizu: ");
    scanf("%d", &broj);

    for(i = 0; i < brElem; i++)
        if( niz[i] == broj )
        {
            printf("\nElement postoji u nizu na poziciji %d\n", i);
            break;
        }

        if( i == brElem )
        {
            printf("\nU datom nizu ne postoji trazeni broj!\n");

        }


    return 0;
}
