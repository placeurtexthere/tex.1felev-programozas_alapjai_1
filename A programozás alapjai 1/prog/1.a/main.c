#include <stdio.h>
/*
 * a);
Hozz létre felsorolt típust évszakok tárolására. A típus a SPRING, SUMMER, AUTUMN, WINTER értékek tárolására legyen képes, a típus neve legyen enum season.
Az ellenőrzőbe csak az új típust létrehozó sorokat kell bemásolnod.
 */

enum season {SPRING, SUMMER, AUTUMN, WINTER};

/*
 * b),
Írj függvényt, mely paraméterként egy évszakot kap, és kiírja az évszak nevét csupa kis betűvel a standard outputra.
A függvény neve legyen print_season.
Írj month2season azonosítójú függvényt, mely paraméterként egy hónap sorszámát kapja (1: január, 12: december), és visszatér a megfelelő évszakkal.
A megoldásban tételezd fel, hogy az enum season típus az elvárásoknak megfelelően van definiálva.
A típust definiáló sorokat ne másold be az ellenőrzőbe, csak a függvényt.
A megoldásban ne támaszkodj az egyes évszak-szimbólumok számszerű értékeire!
*/

char print_season (season) {
    switch (season) {
        case 'SPRING': return 'spring';
            break;
        case 'SUMMER': return 'summer';
            break;
        case 'AUTUMN': return 'autumn';
            break;
        case 'WINTER': return 'winter';
            break;
        default: return 0;
        break;
    }
}

/*
 * 1 january
 * 2 february
 * ****spring****
 * 3 march
 * 4 april
 * 5 may
 * ****summer****
 * 6 june
 * 7 july
 * 8 august
 * ****autumn****
 * 9 september
 * 10 october
 * 11 november
 * ****winter****
 * 12 december
 */

char month2season(int month) {
    switch (month) {
        case 1: printf("WINTER"); break;
        case 2: printf("WINTER"); break;
        case 3: printf("SPRING"); break;
        case 4: printf("SPRING"); break;
        case 5: printf("SPRING"); break;
        case 6: printf("SUMMER"); break;
        case 7: printf("SUMMER"); break;
        case 8: printf("SUMMER"); break;
        case 9: printf("AUTUMN"); break;
        case 10: printf("AUTUMN"); break;
        case 11: printf("AUTUMN"); break;
        case 12: printf("WINTER"); break;
        default: break;

    }
}

int main() {
    int geci;
    scanf("%d", &geci);
    printf("%c", month2season(geci));
    //printf("Hello, World!\n");
    return 0;
}
