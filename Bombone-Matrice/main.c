#include "Bombone.h"

int main(void)
{
    int n, i, j, maksV, maksK;
    int matricaBombona[MAX][MAX], zbirPoVrsti[MAX], zbirPoKoloni[MAX];
    int zbirNaGlavnojDijagonali, zbirNaSporednojDijagonali;

    FILE *ulaz = fopen("Ulaz.txt", "r");
    FILE *izlaz = fopen("Izlaz.txt", "w");

    if(ulaz == NULL)
    {
        printf("\nDatoteka nije ucitana!\n");
        return -1;
    }
    else
    {
        fscanf(ulaz, "%d", &n);

        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                fscanf(ulaz, "%d", &matricaBombona[i][j]);

        for(i = 0; i < n; i++)
        {
            zbirPoVrsti[i] = brojBombonaPoVrsti(matricaBombona, n, i);
            zbirPoKoloni[i] = brojBombonaPoKoloni(matricaBombona, n, i);
        }

        zbirNaGlavnojDijagonali = brojBombonaPoGlavnojDijagonali(matricaBombona, n);
        zbirNaSporednojDijagonali = brojBombonaPoSporednojDijagonali(matricaBombona, n);

        maksV = zbirPoVrsti[0];
        for(i = 1; i < n; i++)
            if(zbirPoVrsti[i] > maksV)
                maksV = zbirPoVrsti[i];

        maksK = zbirPoKoloni[0];
        for(i = 1; i < n; i++)
            if(zbirPoKoloni[i] > maksK)
                maksK = zbirPoKoloni[i];

        if(zbirNaGlavnojDijagonali > maksV && zbirNaGlavnojDijagonali > maksK && zbirNaGlavnojDijagonali > zbirNaSporednojDijagonali)
            fputs("Najvise bombona ima na glavnoj dijagonali!", izlaz);
        else if(zbirNaSporednojDijagonali > maksV && zbirNaSporednojDijagonali > maksK && zbirNaSporednojDijagonali > zbirNaGlavnojDijagonali)
            fputs("Najvise bombona ima na sporednoj dijagonali!", izlaz);
        else if(maksV > maksK)
        {
            fputs("Najvise bombona ima u vrsti/ama sa indeksom: ", izlaz);

            for(i = 0; i < n; i++)
                if(maksV == zbirPoVrsti[i])
                    fprintf(izlaz, "%d ", i);
        }
        else
        {
            fputs("Najvise bombona ima u koloni/ama sa indeksom: ", izlaz);

            for(i = 0; i < n; i++)
                if(maksK == zbirPoKoloni[i])
                    fprintf(izlaz, "%d ", i);
        }

        fclose(ulaz);
        fclose(izlaz);
    }

    return 0;
}
