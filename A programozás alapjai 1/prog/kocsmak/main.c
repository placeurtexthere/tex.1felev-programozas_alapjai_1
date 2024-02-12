#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct drink {
    char name[32];
    int price;
    struct drink* next;
} drink;
typedef struct pub {
    char name[32];
    drink* price_list;
    struct pub* next;
} pub;


pub* find_cheapest(pub *list, char *alc_drink) {
    pub *curr_pub;
    pub *curr_list;
    pub *loc = NULL;
    int price = 0;
    for (curr_pub = list; curr_pub->next != NULL; curr_pub = curr_pub->next)
    {
        for (curr_list = list; curr_list->price_list->next != NULL; curr_list->price_list = curr_list->price_list->next) //árlista bejárás
        {
            if (strcmp(list->price_list->name, alc_drink) == 0) 
            {
                loc = curr_pub;
                if (price = 0)
                    price = list->price_list->price;
                if (list->price_list->price < price)
                {
                    price = list->price_list->price;
                }
            }
        }
    }
    return loc;
}


/* 
végig kell menni a kocsmákon és minden kocsmának az ital lapján 
minden italnál meg kell nézni hogy a neve egyezik e a megadott névvel az strcmp() függvénnyel 
ha egyezik akkor a kocsma nevet és az ital árát el kell menteni egy egy változóba és pointerbe (a kocsma nevét) és menni tovább
ha találunk még egyezést akkor meg kell nézni hogy az ár alacsonyabb e mint az előző, ha igen felülírjuk és a kocsma pointert is 


*/

int main(void) {

}