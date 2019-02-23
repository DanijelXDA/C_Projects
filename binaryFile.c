#include <stdio.h>

int main(void)
{
    int i, brojevi[25];
    FILE *bin;

    bin = fopen("binarndaDatoteka.dat", "w+");

    if(bin == NULL)
        return -1;

    for(i = 1; i <= 25; i++)
        fwrite(&i, sizeof(int), 1, bin);

    fseek(bin, 0, SEEK_SET);

    for(i = 1; i <= 25; i++)
        fread(&brojevi[i], sizeof(int), 1, bin);

    printf("Ispis brojeva upisanih u binarnu datoteku\n\n>> ");
     for(i = 1; i <= 25; i++)
        printf("%d ", brojevi[i]);

    fclose(bin);

    return 0;
}
