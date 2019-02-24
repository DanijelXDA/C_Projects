#include "EvidencijaKosarkasa.h"

Kosarkas kosarkasi[1000];
int brojKosarkasa;
void UcitajKosarkase()
{
    FILE *otvori = fopen("Kosarkasi.txt","r");
    if(otvori==NULL)
        printf("Nije ucitan ni jedan kosarkas!");
    else
    {
        fscanf(otvori,"%*[\n]");
        for(brojKosarkasa = 0; brojKosarkasa < 1000 ; brojKosarkasa += 1)
        {
            char c;
            int i;
            fscanf(otvori,"%d%*c",&kosarkasi[brojKosarkasa].sifra);
            for(i = 0; (c = fgetc(otvori))!=EOF && c!=' '; i+=1)
            {
                kosarkasi[brojKosarkasa].ime[i] = c;
            }
            kosarkasi[brojKosarkasa].ime[i] = '\0';
            for(i = 0; (c = fgetc(otvori))!=EOF && c!=' '; i+=1)
            {
                kosarkasi[brojKosarkasa].prezime[i] = c;
            }
            kosarkasi[brojKosarkasa].prezime[i] = '\0';
            for(i = 0; (c = fgetc(otvori))!=EOF && c!=' '; i+=1)
            {
                kosarkasi[brojKosarkasa].klub[i] = c;
            }
            kosarkasi[brojKosarkasa].klub[i] = '\0';
            fscanf(otvori,"%d%d%*[\n]%*[\n]",&kosarkasi[brojKosarkasa].brojPoena,&kosarkasi[brojKosarkasa].brojUtakmica);
            if(c==EOF)
                break;
        }
        //brojKosarkasa+=1;
    }
    fclose(otvori);
}

int menu()
{
    int Q;
    printf("\nIzaberi:\n");
    printf("(1) Dodaj novog kosarkasa\n");
    printf("(2) Dodaj poene na prethodnoj utakmici zeljenom kosarkasu\n");
    printf("(3) Ispis svih podataka o kosarkasima nekog tima u ""(ImeTogKluba).txt""\n");
    printf("(4) Spisak kosarkasa sortiranih po broju poena\n");
    printf("(5) Izlaz iz programa\n");
    printf("Izbor:");
    do{
        fflush(stdin);
        scanf("%d",&Q);
    }while(!(Q > 0 && Q < 6));
    printf("\n");
    return Q;
}

void dodajKosarkasa()
{
    if(brojKosarkasa==1000)
        printf("Ogranicenje ne dozvoljava unos novog kosarkasa!\n");
    else
    {
        FILE *dodaj = fopen("Kosarkasi.txt","a");
        fprintf(dodaj,"%d ",brojKosarkasa+1);
        kosarkasi[brojKosarkasa].sifra = brojKosarkasa;
        printf("Unesi ime kosarkasa:");
        do{
            scanf("%s",kosarkasi[brojKosarkasa].ime);
        }while(strlen(kosarkasi[brojKosarkasa].ime)==0);
        fprintf(dodaj,"%s ",kosarkasi[brojKosarkasa].ime);
        printf("Unesi prezime kosarkasa:");
        do{
            scanf("%s",kosarkasi[brojKosarkasa].prezime);
        }while(strlen(kosarkasi[brojKosarkasa].prezime)==0);
        fprintf(dodaj,"%s ",kosarkasi[brojKosarkasa].prezime);
        printf("Unesi klub kosarkasa:");
        do{
            scanf("%s",kosarkasi[brojKosarkasa].klub);
        }while(strlen(kosarkasi[brojKosarkasa].klub)==0);
        fprintf(dodaj,"%s ",kosarkasi[brojKosarkasa].klub);
        printf("Unesi broj poena:");
        scanf("%d",&kosarkasi[brojKosarkasa].brojPoena);
        fprintf(dodaj,"%d ",kosarkasi[brojKosarkasa].brojPoena);
        printf("Unesi broj utakmica:");
        scanf("%d",&kosarkasi[brojKosarkasa].brojUtakmica);
        fprintf(dodaj,"%d\n",kosarkasi[brojKosarkasa].brojUtakmica);
        brojKosarkasa+=1;
        fclose(dodaj);
    }
}


void dodajPoeneIUtakmicu()
{
    printf("Unesi ime kosarkasa:");
    char Ime[maxImeIPrezime];
    char Prezime[maxImeIPrezime];
    do{
        scanf("%s",Ime);
    }while(strlen(Ime)==0);
    printf("Unesi prezime kosarkasa:");
    do{
        scanf("%s",Prezime);
    }while(strlen(Prezime)==0);
    int Q = 0,index,osvojeniPoeni;
    for(int i = 0; i < brojKosarkasa; i += 1)
    {
        if(strcmp(kosarkasi[i].ime,Ime)==0)
            if(strcmp(kosarkasi[i].prezime,Prezime)==0)
            {
                Q = 1;
                index = i;
            }
    }
    if(Q)
    {
        printf("Unesi broj osvojenih poena:");
        scanf("%d",&osvojeniPoeni);
        kosarkasi[index].brojPoena += osvojeniPoeni;
        kosarkasi[index].brojUtakmica += 1;
        FILE *izmeni = fopen("Kosarkasi.txt","w");
        for(int i = 0; i < brojKosarkasa; i += 1)
        {
            fprintf(izmeni,"%d ",kosarkasi[i].sifra);
            fprintf(izmeni,"%s ",kosarkasi[i].ime);
            fprintf(izmeni,"%s ",kosarkasi[i].prezime);
            fprintf(izmeni,"%s ",kosarkasi[i].klub);
            fprintf(izmeni,"%d ",kosarkasi[i].brojPoena);
            fprintf(izmeni,"%d\n",kosarkasi[i].brojUtakmica);
        }
    }
    else
        printf("Nije pronadjen taj kosarkas!");
}

void ispisKosarkasa()
{
    printf("Unesi klub:");
    char Klub[maxImeKluba],klubFILE[maxImeKluba+4];
    int Q = 0;
    scanf("%s",Klub);
    strcpy(klubFILE,Klub);
    sprintf(klubFILE,"%s.txt",klubFILE);
    FILE *otvori = fopen(klubFILE,"w");
    for(int i = 0; i < brojKosarkasa; i += 1)
    {
        if(strcmp(Klub,kosarkasi[i].klub)==0)
        {
            fprintf(otvori,"%d ",kosarkasi[i].sifra);
            fprintf(otvori,"%s ",kosarkasi[i].ime);
            fprintf(otvori,"%s ",kosarkasi[i].prezime);
            fprintf(otvori,"%s ",kosarkasi[i].klub);
            fprintf(otvori,"%d ",kosarkasi[i].brojPoena);
            fprintf(otvori,"%d\n",kosarkasi[i].brojUtakmica);
            Q = 1;
        }
    }
    if(!Q)
        {
            printf("Nije pronadjen ni jedan kosarkas iz tog kluba!");
            remove(klubFILE);
        }
    fclose(otvori);
}

void spisakKosarkasa()
{
    for(int k = 1; k < brojKosarkasa; k += 1)
    {
        int flag = 0;
        for(int i = 0; i < brojKosarkasa - k; i += 1)
        {
            if(kosarkasi[i].brojPoena < kosarkasi[i+1].brojPoena)
            {
                Kosarkas temp =  kosarkasi[i];
                kosarkasi[i] = kosarkasi[i+1];
                kosarkasi[i+1] = temp;
                flag = 1;
            }
        }
        if(flag==0) break;
    }
    for(int i = 0; i < brojKosarkasa; i += 1)
    {
        printf("%d. %s %s, broj poena: %d\n",i+1,kosarkasi[i].ime,kosarkasi[i].prezime,kosarkasi[i].brojPoena);
    }
}
