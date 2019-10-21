/******************************/
/// Autor: Danijel Jovanovic ///
/// CharSet: UTF-8           ///
/// Date: 21.10.2019.        ///
/******************************/

#include <stdio.h>

#define RED_MATRICE 10

int main(void)
{

    int a[RED_MATRICE][RED_MATRICE], B[RED_MATRICE - 1][RED_MATRICE];
    int i, ii, j, n, m;
    int ponovo, suma[10], maks, maksIndex = 0;

    do
    {
        ponovo = 0;
        printf("\nUnesite broj vrsta n = ");
        scanf("%d", &n);
        if (n < 1 || n > RED_MATRICE  )
        {
            ponovo = 1;
            printf("\nGreska!!! \nBroj vrsta mora biti u opsegu od 0 do %d.\nPokusajte ponovo.", RED_MATRICE);
        }
    }
    while (ponovo);


    do
    {
        ponovo = 0;
        printf("\nUnesite broj kolona = ");
        scanf("%d", &m);
        if (m < 1 || m > 8 )
        {
            ponovo = 1;
            printf("\nGreska!!! \nBroj kolona  mora biti u opsegu od 0 do %d.\nPokusajte ponovo.", 8);
        }
    }
    while (ponovo);

    printf("\nUnesite elemente matrice %dx%d: \n", n, m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf(" A[%d][%d]=", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; ++i)
    {
        suma[i] = 0;
        for (j = 0; j < m; ++j)
            suma[i] += a[i][j];
    }

    /// provera najvece sume
    maks = suma[0];
    for(i = 1; i < n; i++)
        if(suma[i] > maks) {
            maks = suma[i];
            maksIndex = i;
        }

    printf("\n\nNajveca suma iznosi: %d\nMax index: %d\n", maks, maksIndex);

    // formiranje niza bez maks sume
    for(i=0, ii = 0; i < n; i++, ii++)
    {
        for(j = 0; j < m; j++) {
            if(ii == maksIndex) // preskoci vrstu sa maax sumom
                ii++;
            else
                for(j = 0; j < m; j++)
                   B[i][j] = a[ii][j];
        }
    }


    printf("\n\nElementi  matrice A:\n");
    for (unsigned int ii = 0; ii < n; ++ii)
    {
        for (unsigned int jj = 0; jj < m; ++jj)
            printf("\t%d", a[ii][jj]);
        printf("\n");
    }

    printf("\n\nElementi  matrice B:\n");
    for (unsigned int ii = 0; ii < n - 1; ++ii)
    {
        for (unsigned int jj = 0; jj < m; ++jj)
            printf("\t%d", B[ii][jj]);
        printf("\n");
    }


    return 0;
}
