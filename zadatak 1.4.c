#include <stdio.h>

int main(void)
{
    int k1, k2, t1, t2;

    // Stefan
    k1 = 50 * 20; // Dimenzija kolaca
    k1 /= 25; // Broj parcica kolaca

    // Kristina
    k2 = 13 * 50; // Dimenzije kolaca
    k2 /= 25; // Broj parcica kolaca

    t1 = k1 * 26; // Broj parcica puta vreme koliko je potrebno da
                  // Stefan pojede k1 parcica kolaca

    t2 = k2 * 37; // Broj parcica puta vreme koliko je potrebno da
                  // Kristina pojede k1 parcica kolaca
    if( t1 < t2 )
        printf("\nStefan je brze pojeo %d parcica kolaca za %d sekundi.\n", k1, t1);
    else
        printf("\nKristina je brze pojela %d parcica kolaca za %d sekundi.\n", k2, t2);

    return 0;
}
