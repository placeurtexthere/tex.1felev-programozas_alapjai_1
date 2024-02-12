#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int progValasztas(void){
    printf("Adja meg mit szeretne tenni\n");
    putchar('\n');
    printf("Auto hozzadas eseten irja be az 1-es szamot\n");
    printf("Atlag fogyasztas szamlalohoz 2-es\n");
    printf("Tankolas mentese, 3-es\n");
    printf("Legtobbszor tankolt hely megtekintese 4-es\n");

    int progVal;
    scanf("%d", &progVal);
    return progVal;
}


/*Strukturak es lista szerkezetek megvalositasa*/

typedef struct autok
{
    char rendszam[10];
    char uzemanyag;
    char nev[20];

    struct autok *next;
}autok, *autok_ptr;

typedef struct uzemA
{
    char benzinkut[20];
    char uzemanyag;
    int uzema_ar;
    int uzema_meny;
    int km;

    struct uzemA *next;
}uzemA_List, uzemA_ptr;

typedef struct kutak
{
    char benzinkut[20];
    int b95;
    int b100;
    int Diesel;

    struct kutak *next;
}kutak, *kutak_ptr;


/*
Elso inicializacio a fuggvenyek miatt
*/


autok_ptr prog1(autok* head);
autok_ptr prog2(autok* head);
autok_ptr prog3(autok* head);
autok_ptr prog4(autok* head);

/*Kulonbozo listak torlesere alkalmas fuggvenyek
Memoria szivargas elkerulese vegett
*/


void deleteL(autok* head){
    if (head->next == NULL)
    {free(head);
        head = NULL;}

    while ( head != NULL )
    {
        autok * p = head ;
        head = head -> next ;
        free (p);
    }
}

void deleteLog(uzemA_List* head){
    if (head->next == NULL)
    {free(head);
        head = NULL;}

    while ( head != NULL )
    {
        uzemA_List * p = head ;
        head = head -> next ;
        free (p);
    }
}

void deleteK(kutak* head){
    if (head->next == NULL)
    {free(head);
        head = NULL;}

    while ( head != NULL )
    {
        kutak* p = head ;
        head = head -> next ;
        free (p);
    }
}

double atlagF(int km1, double km2, int benzin){
    double atlag;
    atlag = (benzin / (km2 - km1)) * 100;
    return atlag;
}

/*read_L fuggveny egy listat keszit a tank_log.txt filebol egyetlen olvasassal*/


uzemA_List* read_L(uzemA_List* head){
    FILE* Benzin_Log = fopen("tank_log.txt", "r");
    if (Benzin_Log == NULL) return NULL;

    head = NULL;
    while (!feof(Benzin_Log)){
        uzemA_List* log = (uzemA_List*)malloc(sizeof(uzemA_List));
        fscanf(Benzin_Log, "%s", log->benzinkut);
        fscanf(Benzin_Log, "%c", &log->uzemanyag);
        fscanf(Benzin_Log, "%d", &log->uzema_ar);
        fscanf(Benzin_Log, "%d", &log->uzema_meny);
        fscanf(Benzin_Log, "%d", &log->km);

        log->next = head;
        head = log;
    }
    fclose(Benzin_Log);
    return head;
}

/*read_kutak fuggveny egy listat keszit a kut.txt filebol*/

kutak* read_kutak(kutak* head){
    head = NULL;
    FILE* Kut = fopen("kut.txt", "r+");
    if (Kut == NULL) return NULL;

    while (!feof(Kut)){
        kutak_ptr new = (kutak*)malloc(sizeof(kutak));
        fscanf(Kut,"%s", new->benzinkut);
        fscanf(Kut, "%d", &new->b95);
        fscanf(Kut, "%d", &new->b100);
        fscanf(Kut, "%d", &new->Diesel);
        char c;
        fscanf(Kut, "%c", &c);

        new->next = head;
        head = new;
    }

    fclose(Kut);
    return head;
}

/*A standard inputrol egy listat hoz letre amit aztan kiir az auto_data fileban
*/

autok* create_car(autok* head){

    FILE *Au = fopen("auto_data.txt", "a+"); //auto data file
    if (Au == NULL) return NULL;

    char ize = 'i';
    char bname[2];
    char valami;
    char nem[2] = "n"; char igen[2] = "i";       //valami a standard inputon levo szemet miatt van

    while (strcmp(&ize, "n") != 1) {
        system("cls");
        autok *car = (autok*)malloc(sizeof(autok));
        printf("Kerem adja meg az auto rendszamat (maximum 7 karakter):\n");
        scanf("%s", car->rendszam);

        if (strlen(car->rendszam) > 8) {
            while(strlen(car->rendszam) > 7) {
                printf("Kerem figyeljen a megengedett hosszra:\n");
                scanf("%s", car->rendszam);
            }
        }

        scanf("%c", &valami);

        printf("Kerem adja meg az uzemanyag tipust (egy karakter / benzin: b diesel: d):\n");
        scanf("%c", &car->uzemanyag);
        /* if (strcmp("b", &car->uzemanyag) != 0 && strcmp("d", &car->uzemanyag) != 0) {
             int falsel = 1;
             while (falsel == 1){
                 printf("Kerem adjon meg szabalyos uzemanyag tipust:\n");scanf("%c", &valami);
                 scanf("%c", &car->uzemanyag);



             if (strcmp("b", &car->uzemanyag) == 0) {falsel = 0;}
             if (strcmp("d", &car->uzemanyag) == 0) {falsel = 0;}
             }
         }*/
        if (car->uzemanyag != 'b' && car->uzemanyag != 'd'){
            int falsel = 1;
            while (falsel == 1){
                printf("Kerem adjon meg szabalyos uzemanyag tipust:\n");scanf("%c", &valami);
                scanf("%c", &car->uzemanyag);

                if (car->uzemanyag == 'b') falsel = 0;
                if (car->uzemanyag == 'd') falsel = 0;
            }
        }

        scanf("%c", &valami);

        printf("Szeretne e becenevet allitani ehez az autohoz?  (i: igen, n: nem):\n"),
                scanf("%s", bname);

        if (strcmp(bname, "n") != 0 && strcmp(bname, "i") != 0){
            int falsel = 1;
            while (falsel == 1){
                printf("Kerem a megfelelo jelzeseket hasznalja\n");
                scanf("%s", bname);

                if (strcmp(bname, "n") == 0) falsel = 0;
                if (strcmp(bname, "i") == 0) falsel = 0;
            }
        }
        if (strcmp(bname, nem) == 0) {char mukodj[] = {"teszt"}; strcpy(car->nev, mukodj);}

        if (strcmp(bname, igen) == 0) {
            printf("Kerem adja meg az autoja becenevet (maximum 20 karakter):\n");
            scanf("%s", car->nev);
        }

        scanf("%c", &valami);

        printf("Szeretne e tovabbi autot hozza adni a filehoz? (i: igen, n: nem):\n");

        if (strcmp(bname, "n") != 0 && strcmp(bname, "i") != 0){
            int falsel = 1;
            while (falsel == 1){
                printf("Kerem a megfelelo jelzeseket hasznalja\n");
                scanf("%s", bname);

                if (strcmp(bname, "n") == 0) falsel = 0;
                if (strcmp(bname, "i") == 0) falsel = 0;
            }
        }

        scanf("%c", &ize);

        car->next = head;
        head = car;
        if (strcmp(&ize, "n") > 0 ) break;
        car = car->next;
    }

    autok *p = head;
    while (p != NULL){
        fprintf(Au, "%s\n", p->rendszam);
        fprintf(Au, "%s\n", p->nev);
        fprintf(Au, "%c\n", p->uzemanyag);
        p = p->next;
    }

    fclose(Au);
    return head;
}

/*read_log fuggveny az n edik adatot olvassa be majd egy lancolt listat keszit belole amit aztan visszateresi ertekkent visszaadja*/

uzemA_List* read_log(int n){
    FILE* Benzin_Log = fopen("tank_log.txt", "r");
    if (Benzin_Log == NULL) return NULL;

    uzemA_List* log = (uzemA_List*)malloc(sizeof(uzemA_List));
    for (int i = 0; i < n; i += 4){
        fscanf(Benzin_Log, "%s", log->benzinkut);
        fscanf(Benzin_Log, "%c", &log->uzemanyag);
        fscanf(Benzin_Log, "%d", &log->uzema_ar);
        fscanf(Benzin_Log, "%d", &log->uzema_meny);
        fscanf(Benzin_Log, "%d", &log->km);
    }
    return log;
}

/*save_Log fuggveny egy listat kap parameterkent aminek tartalmat beleirja a tank_log fileba*/

void save_Log(uzemA_List* head){

    FILE* Benzin_Log = fopen("tank_log.txt", "a");
    if (Benzin_Log == NULL) return ;

    if (head == NULL) {printf("A lista ures\nNincs mit kimeneteni\n"); return;}

    uzemA_List* log = head;
    while (log != NULL){
        fprintf(Benzin_Log, "\n%s\n", log->benzinkut);
        fprintf(Benzin_Log, "%c\n", log->uzemanyag);
        fprintf(Benzin_Log, "%d\n", log->uzema_ar);
        fprintf(Benzin_Log, "%d\n", log->uzema_meny);
        fprintf(Benzin_Log, "%d\n", log->km);
        log = log->next;
    }
    fclose(Benzin_Log);
}

/*Az elso valasztott fuggveny
  A fentebb emlitett create_car fuggveny segitsegevel mukodik
*/

autok* prog1(autok* head){
    autok* control = create_car(head);
    if (control == NULL) return NULL;
    system("cls");
    printf("Szeretne e tankolast menteni? (igen: 1 nem: 0)\n");
    int val;
    scanf("%d", &val);          //uj valasztas
    if (val == 1)
        head = prog3(head);
    return control;
}

/*Az atlagfogyasztas szamlalo fuggveny filebol vagy standard inputrol*/

autok* prog2(autok* head){
    system("cls");
    printf("Szeretne filebol szamolni vagy most irna be az adatokat? (1: FILE, 2: Most irnam be)\n");
    int valaszt;
    scanf("%d", &valaszt);

    int n, km1, meny1;

    uzemA_List* logh;
    uzemA_List* log = logh;
    char enter;                 // enter valtozo a stringek altal standard inputon hagyott '\n' karakterek olvasasara van

    switch (valaszt){
        case 1:
            printf("Hanyadik bejegyzest szeretne betolteni?\n");
            scanf("%d", &n);
            logh = read_log(n);
            log = logh;
            logh->next = NULL;

            //log = read_log(n);
            if (log == NULL) return NULL;

            break;
        case 2:
            logh = (uzemA_List*)malloc(sizeof(uzemA_List));
            log = logh;
            log->next = NULL;

            printf("Adja meg a kilometerora allast a tankolas elott:\n");
            scanf("%d", &km1);
            log->km = km1;
            printf("Adja meg hogy mennyit tankolt:\n");
            scanf("%d", &meny1);
            log->uzema_meny = meny1;
            scanf("%c", &enter);
            printf("Kerem adja meg az uzemanyag tipust (b: benzin, d: diesel):\n");
            scanf("%c", &log->uzemanyag);

            /* if (strcmp("b", &log->uzemanyag) != 0 && strcmp("d", &log->uzemanyag) != 0) {
            int falsel = 1;
            while (falsel == 1){
                printf("Kerem adjon meg szabalyos uzemanyag tipust:\n");scanf("%c", &enter);
                scanf("%c", &log->uzemanyag);

            if (strcmp("b", &log->uzemanyag) == 0) {falsel = 0;}
            if (strcmp("d", &log->uzemanyag) == 0) {falsel = 0;}
            }
        }*/
            if (log->uzemanyag != 'b' && log->uzemanyag != 'd'){
                int falsel = 1;
                while (falsel == 1){
                    printf("Kerem adjon meg szabalyos uzemanyag tipust:\n");scanf("%c", &enter);
                    scanf("%c", &log->uzemanyag);

                    if (log->uzemanyag == 'b') falsel = 0;
                    if (log->uzemanyag == 'd') falsel = 0;
                }
            }

            break;
        default:
            deleteLog(logh);
            return NULL;
    }

    printf("Kerem adja meg mennyi kilometert tett meg:\n");
    int km2;
    scanf("%d", &km2);

    double atlag = atlagF(log->km, km2, log->uzema_meny);

    printf("Az atlagfogyasztas: %.1f \n", atlag); // A fuggveny itt szamolja ki az atlagfogyasztast egy masik fuggveny segitsegevel

    deleteLog(logh);
    head = (autok*)malloc(sizeof(autok));
    head->next = NULL;
    return head;
}

/*Elozo tankolasok mentese*/

autok* prog3(autok* head){
    FILE* f = fopen("tank_log.txt", "a+");
    if (f == NULL) return NULL;

    system("cls");
    uzemA_List *list = (uzemA_List*)malloc(sizeof(uzemA_List));
    char enter;

    printf("Adja meg a benzinkut nevet: \n");
    scanf("%s", list->benzinkut);

    scanf("%c", &enter);

    printf("Adja meg a tankolt uzemanyag fajtajat (b: benzin, d: diesel): \n");
    scanf("%c", &list->uzemanyag);

    /*if (strcmp("b", &list->uzemanyag) != 0 && strcmp("d", &list->uzemanyag) != 0) {
               int falsel = 1;
               while (falsel == 1){
                   printf("Kerem adjon meg szabalyos uzemanyag tipust:\n");scanf("%c", &enter);
                   scanf("%c", &list->uzemanyag);



               if (strcmp("b", &list->uzemanyag) == 0) {falsel = 0;}
               if (strcmp("d", &list->uzemanyag) == 0) {falsel = 0;}
               }
           }*/
    if (list->uzemanyag != 'b' && list->uzemanyag != 'd'){
        int falsel = 1;
        while (falsel == 1){
            printf("Kerem adjon meg szabalyos uzemanyag tipust:\n");scanf("%c", &enter);
            scanf("%c", &list->uzemanyag);

            if (list->uzemanyag == 'b') falsel = 0;
            if (list->uzemanyag == 'd') falsel = 0;
        }
    }


    printf("Adja meg hogy mennyit fizetett: \n");
    scanf("%d", &list->uzema_ar);

    printf("Adja meg hogy mennyit tankolt: \n");
    scanf("%d", &list->uzema_meny);

    printf("Adja meg a km-ora allasat: \n");
    scanf("%d", &list->km);

    list->next = NULL;

    save_Log(list);

    fclose(f);
    deleteLog(list);
    head = (autok*)malloc(sizeof(autok));
    head->next = NULL;
    return head;
}

/*Filebol kiszamolja hogy hol tankoltunk a legtobbet es hogy a masodik legtobszor tankolt helyen mennyit fizettunk*/

autok* prog4(autok* head){
    uzemA_List* Lhead = NULL;
    kutak* Khead = NULL;

    Khead = read_kutak(Khead);
    int db = 0;
    kutak* p = Khead;

    while (p != NULL){
        db++;
        p = p->next;
    }

    Lhead = read_L(Lhead);
    int* legtobb = (int*)calloc(db, sizeof(int));
    /* Most megtudtam hogy mennyi elemem van a fileban az az mennyi kulonbozo kut van elmentve az adatbazisban.
    A tombben levo szamok lekovetik a fileban levo kutak neveinek elhelyezkedeset. Tehat a tomb 0- eleme a fileban az elso es igy tovabb*/
    p = Khead;
    uzemA_List* log = Lhead;
    int i = 0;
    while (p != NULL){
        log = Lhead;
        while (log != NULL){
            if (strcmp(p->benzinkut, log->benzinkut) == 0) {legtobb[i]++;}
            log = log->next;
        }
        p = p->next;
        i++;
    }

    int n = i;
    int hely = 0;
    int max = legtobb[0];
    int max2 = max;
    for(i = 0; i < n; i++){
        if (max < legtobb[i]) {
            max2 = max;
            max = legtobb[i];
            hely = i;
        }
    }

    log = Lhead;
    p = Khead;
    for (i = 0; i < hely; i++) p= p->next;
    system("cls");

    printf("Legtobbszor itt tankolt: %s\n", p->benzinkut);
    printf("Ennyiszer tankolt ott: %d\n", max);
    putchar('\n');
    i = 0;
    while (legtobb[i] != max2) i++;
    hely = i;

    p = Khead;
    for (i = 0; i < hely; i++) p= p->next;
    int kedv_B = 0; //Kedvenc helyen elkoltott uzemanyagosszeg

    while (strcmp(p->benzinkut, log->benzinkut) != 0) {log= log->next; kedv_B += log->uzema_meny;}
    printf("A masodik kedvenc hely: %s\n", p->benzinkut);
    printf("A masodik kedvenc helyen ennyibe kerult volna az osszes tankolas: \n");
    printf("95-os benzin: %d\n", kedv_B * p->b95);
    printf("100-as benzin: %d\n", kedv_B * p->b100);
    printf("Diesel: %d\n", kedv_B * p->Diesel);

    head = (autok*)malloc(sizeof(autok));
    head->next = NULL;

    free(legtobb);
    deleteLog(Lhead);
    deleteK(Khead);
    return head;
}

/*program fuggveny a central hub ha ugytetszik
ezen a fuggvenyen keresztul legalabb egyszer atmegy minden informacio (majdnem)
Ez a fuggveny felelos azert hogy a felhasznalo altal meghatarozott program a programon belul elindulhasson
*/


autok* program(int programValaszto, autok *head){
    switch(programValaszto){
        case 1:
            return prog1(head);  //Auto hozza adasa meglevo filehoz
            break;
        case 2:
            return prog2(head);    //Atlagfogyasztas szamlalo meglevo vagy ujonnan hozzaadott autoval
            break;
        case 3:
            return prog3(head);     //Tankolas mentese
            break;
        case 4:
            return prog4(head);     //Legtobsszor tankolt hely megtekintese es elkoltott penz kiszamitasa
            break;
        default :
            system("cls");
            printf("Kerem valosszon a ket szam kozul\n");
            putchar('\n');
            programValaszto = progValasztas();

    }
    return NULL;
}


/*Teszteleshez hasznalt fuggveny
A vegeredmeny kiszamitasahoz vagy az adatok manipulasahoz semmi koze
Csak es kizarolag teszteleshez kellett, fog kelleni


void printfList(autok *head){
    for (autok*p = head; p != NULL; p = p->next)
        printf("\nTESZTELESHEZ\n%s\n\n", p->rendszam);
}
*/


int main()
{
    int progVal = progValasztas();
    autok *head = NULL;
    autok* control = program(progVal, head);
    if (control == NULL) {
        printf("\nError\nFile nem letezik vagy tulcsordult a szamlalo!\n");
        printf("Kerem hiba eseten vegye fel a kapcsolatot a fejlesztovel");

        return 1;}

    //printfList(control);          teszteleshez
    deleteL(control);
    printf("Remelem segithettem, viszont latasra :)\n");
    return 0;
}
