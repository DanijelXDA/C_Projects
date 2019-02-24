#include "EvidencijaKosarkasa.h"

int main()
{
    int q=1;
    UcitajKosarkase();
    while(q)
        switch(menu())
        {
            case 1:
                dodajKosarkasa();
                break;
            case 2:
                dodajPoeneIUtakmicu();
                break;
            case 3:
                ispisKosarkasa();
                break;
            case 4:
                spisakKosarkasa();
                break;
            case 5:
                q=0;
        }
}
