#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node* left;
    struct _node* right;
} node;

void insert(node* node_root, int data) {
    node* mem; // csinálunk egy ideiglenes tároló pointert
    node* n = node_root; // átadjuk a paraméter pointert egy ideiglenes pointernek
    while(n != NULL) { // bejárjuk a fát
        if(n->data == data) return; // ha a beilleszterndő adat már benne van a fában akkor leáll a függvény
        node* new = (node*)calloc(1, sizeof(node)); // foglalunk egy új elemnek memóriát mivel tudjuk hogy még nincs benne a fában
        if(n->data > data) { // ha az új adat kissebb mint a jelenlegi fa elem értéke
            mem = n; // ideiglenesen eltároljuk a jelenlegi elem címét
            n = n->left; // lépünk a jelenlegi adatnál kissebb értékeket tartalmazó ágba
            new->data = data; // az új elem data elemének az értékét megváltozatjuk az a változó értékére
            mem->left = new; // az előző fa elem bal oldalára berakjuk a feltöltött elemet
        }
        else if(n->data < data) { // ha az új adat nagyobb mint a jelenlegi fa elem értéke
            mem = n; // ideiglenesen eltároljuk a jelenlegi elem címét
            n = n->right; // lépünk a jelenlegi adatnál nagyobb értékeket tartalmazó ágba
            new->data = data; // az új elem data elemének az értékét megváltozatjuk az a változó értékére
            mem->right = new; // az előző fa elem jobb oldalára berakjuk a feltöltött elemet
        }
    }
}


int main() {
    printf("Hello, World!\n");
    return 0;
}
