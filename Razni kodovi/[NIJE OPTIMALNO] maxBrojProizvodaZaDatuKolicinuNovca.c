#include <stdio.h>

int main() {

    int brojProizvoda;
    int i, k = 0, brojac = 0;
    float cenaProizvoda1, cenaProizvoda2, cenaProizvoda3,
    cenaProizvoda4, cenaProizvoda5, cenaProizvoda6, cenaProizvoda7,
    cenaProizvoda8, cenaProizvoda9, cenaProizvoda10, cenaProizvoda11,
    cenaProizvoda12, cenaProizvoda13, cenaProizvoda14, cenaProizvoda15; // i tako do 100 npr. za max
                                                                        // 10 proizvoda
    float kolicinaNovca;

    printf("\nUnesite broj proizvoda: ");
    scanf("%i", &brojProizvoda);

    printf("\n\nUnesite kolicinu para koje imate: ");
    scanf("%f", &kolicinaNovca);

    switch(brojProizvoda) {
        case 1:
            {
                printf("\nUnesite cenu za 1. proizvod: ");
                scanf("%f", &cenaProizvoda1);
                break;
            }
        case 2:
            {
                printf("\nUnesite cenu za 1. proizvod: ");
                scanf("%f", &cenaProizvoda1);
                printf("\nUnesite cenu za 2. proizvod: ");
                scanf("%f", &cenaProizvoda2);
                break;
            }
        case 3:
            {
                printf("\nUnesite cenu za 1. proizvod: ");
                scanf("%f", &cenaProizvoda1);
                printf("\nUnesite cenu za 2. proizvod: ");
                scanf("%f", &cenaProizvoda2);
                printf("\nUnesite cenu za 3. proizvod: ");
                scanf("%f", &cenaProizvoda3);
                break;
            }
        case 4:
            {
                printf("\nUnesite cenu za 1. proizvod: ");
                scanf("%f", &cenaProizvoda1);
                printf("\nUnesite cenu za 2. proizvod: ");
                scanf("%f", &cenaProizvoda2);
                printf("\nUnesite cenu za 3. proizvod: ");
                scanf("%f", &cenaProizvoda3);
                printf("\nUnesite cenu za 4. proizvod: ");
                scanf("%f", &cenaProizvoda4);
                break;
            }
        case 5:
            {
                printf("\nUnesite cenu za 1. proizvod: ");
                scanf("%f", &cenaProizvoda1);
                printf("\nUnesite cenu za 2. proizvod: ");
                scanf("%f", &cenaProizvoda2);
                printf("\nUnesite cenu za 3. proizvod: ");
                scanf("%f", &cenaProizvoda3);
                printf("\nUnesite cenu za 4. proizvod: ");
                scanf("%f", &cenaProizvoda4);
                printf("\nUnesite cenu za 5. proizvod: ");
                scanf("%f", &cenaProizvoda5);
                break;
            }
        case 6:
            {
                printf("\nUnesite cenu za 1. proizvod: ");
                scanf("%f", &cenaProizvoda1);
                printf("\nUnesite cenu za 2. proizvod: ");
                scanf("%f", &cenaProizvoda2);
                printf("\nUnesite cenu za 3. proizvod: ");
                scanf("%f", &cenaProizvoda3);
                printf("\nUnesite cenu za 4. proizvod: ");
                scanf("%f", &cenaProizvoda4);
                printf("\nUnesite cenu za 5. proizvod: ");
                scanf("%f", &cenaProizvoda5);
                printf("\nUnesite cenu za 6. proizvod: ");
                scanf("%f", &cenaProizvoda6);
                break;
            }
        case 7:
            {
                printf("\nUnesite cenu za 1. proizvod: ");
                scanf("%f", &cenaProizvoda1);
                printf("\nUnesite cenu za 2. proizvod: ");
                scanf("%f", &cenaProizvoda2);
                printf("\nUnesite cenu za 3. proizvod: ");
                scanf("%f", &cenaProizvoda3);
                printf("\nUnesite cenu za 4. proizvod: ");
                scanf("%f", &cenaProizvoda4);
                printf("\nUnesite cenu za 5. proizvod: ");
                scanf("%f", &cenaProizvoda5);
                printf("\nUnesite cenu za 6. proizvod: ");
                scanf("%f", &cenaProizvoda6);
                printf("\nUnesite cenu za 7. proizvod: ");
                scanf("%f", &cenaProizvoda7);
                break;
            }
        //  I tako to 100 na ovaj nacin

    }

    k += cenaProizvoda1;

    if( k < kolicinaNovca ) {
        k += cenaProizvoda2;
        brojac++;
    }
    else
        printf("\nMozete da kupite ukupno %d proizvoda.", brojac);


    if( k < kolicinaNovca ) {
        k += cenaProizvoda3;
        brojac++;
    }
    else
        printf("\nMozete da kupite ukupno %d proizvoda.", brojac);

    if( k < kolicinaNovca ) {
        k += cenaProizvoda4;
        brojac++;
    }
    else
        printf("\nMozete da kupite ukupno %d proizvoda.", brojac);

    if( k < kolicinaNovca ) {
        k += cenaProizvoda5;
        brojac++;
    }
    else
        printf("\nMozete da kupite ukupno %d proizvoda.", brojac);

    if( k < kolicinaNovca ) {
        k += cenaProizvoda6;
        brojac++;
    }
    else
        printf("\nMozete da kupite ukupno %d proizvoda.", brojac);

    if( k < kolicinaNovca ) {
        k += cenaProizvoda7;
        brojac++;
    }
    else
        printf("\nMozete da kupite ukupno %d proizvoda.", brojac);


    return 0;
}
