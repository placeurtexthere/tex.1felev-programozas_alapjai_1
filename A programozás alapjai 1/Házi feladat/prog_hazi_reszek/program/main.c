#include <stdio.h>
#include <stdlib.h>

typedef struct termekek {
    char nev[150];
    double ar;
    struct termekek *next;
} termekek, *termekek_ptr;

typedef struct vasarlasok {
    int sum_price;
    struct vasarlasok *next;
    struct termekek *termek_lista;
} vasarlasok, *vasarlasok_ptr;
 
/*
termekek_ptr push_product(termekek_ptr head, char n[150], double a) { // új lista elem hozzáadása a termékekhez
    termekek_ptr p = malloc(sizeof(termekek)); // memóriát foglalunk az új elemnek és a memóriacím pointerét oda adjuk a p pointernek
    p->nev = n; // az új elem nev változóját megváltoztatjuk a paraméterként megadott változó értékére
    p->ar = a; // megcsináljuk ugyan azt mégegyszer, de most az ar változóval
    p->next = head; // a mostani elem next címét átállítjuk az előző elem head pointerének címére
    head = p; // a régi head -et megváltozattjuk a p -re így mostmár ő az új head
    return p; // vissza adjuk az új head -etdf
}
vasarlasok_ptr push_purchase(vasarlasok_ptr head, termekek_ptr termekek_ptr) { // új lista elem hozzáadása a vásárlásokhoz
    vasarlasok_ptr p = malloc(sizeof(vasarlasok));
    termekek_ptr termek = malloc(sizeoff(termekek));
    termek->next = NULL;
    p->termek_lista = termek;
    p->next =
}*/

/* TO-DO
 * függvényt kell csinálni a vásárlások láncolt lista első elemének elkészítéséhez
 * függvény új termekek lista készítéshez
 * vasarlasok file bejárása sorról sorra, minden sor minden int-jét meg kell nézzük és mindegyiknél végig kell futni a termekek fileon és össze kell hasonlítani hogy az id-k megegyeznek e, amennyiben nincs egyezés a tétel nem kerül bejegyzésre
 *      ezt úgy lehet a legjobban megoldani hogy a file minden soránál megnézzük hogy nem e a file vége ha nem akkor csinálunk egy új vásárlások lista elemet és miközben hasonlítgatunk csináljuk az újabb termekek lista elemeket
 * 
 * 
 *  
 */





vasarlasok_ptr file_to_list(char purchase_file[], char product_file[]) {
    FILE *purchase_f = fopen(purchase_file, "r"); // megnyitjuk a vásárlások filet szöveges olvasás módban 
    FILE *product_f = fopen(product_file, "r"); // megnyitjuk a termékek filet szöveges olvasás módban 
    vasarlasok_ptr vp = malloc(sizeof(vasarlasok)); // egy vp nevű vasarlasok pointer címére foglalunk helyet az első lista elemnek
    termekek_ptr tp = malloc(sizeof(termekek)); // egy tp nevű termékek pointer címére foglalunk helyet az első lista elemnek
    vp->next = NULL; // az első elem következő elemre mutató next pointerének NULL értéket adunk ezzel indikálva a lista végét
    tp->next = NULL; // az első elem következő elemre mutató next pointerének NULL értéket adunk ezzel indikálva a lista végét
    vp->termek_lista = tp; // a vásárlások lista termek_lista elemének oda adjuk a most elkészített termék lista első elemének pointerét
    /*int o;
    if(purchase_f == NULL)
        return 0;
    while (1)
    {
       // o = fscanf(purchase_f, );
    }*/
    

    fclose(purchase_f); // bezárjuk a vásárlások filet
    fclose(product_f); // bezárjuk a termékek filet
    return vp;
}

double sum_price(vasarlasok_ptr tetelek) {
    double sum = 0;


    return sum;
}

double avg_price (void) {
    double sum = 0, avg;
    int sales = 0;



    return avg; // vissza adja a kiszámolt átlag eladási árat 
}






int main(void) {
    vasarlasok_ptr v = NULL;
    char products[] = "termekek.txt", purchases[] = "vasarlasok.txt";
    v = file_to_list(purchases, products);



    return 0;
}