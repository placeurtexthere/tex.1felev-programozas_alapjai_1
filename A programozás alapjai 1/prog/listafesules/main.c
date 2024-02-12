#include <stdio.h>
#include <stdlib.h>
typedef struct _listelem {
    double data;
    struct _listelem* next;
} listelem;

listelem* list_from_array(double t[], int k) {
    listelem* end = NULL;
    for (int i = k - 1; i >= 0; i--) {
        listelem* new = (listelem *)malloc(sizeof(listelem));
        new->data = t[i];
        new->next = end;
        end = new;
    }
    return end;
}



listelem* merge(listelem* n, listelem* k){
    listelem* Np = n;
    listelem* Kp = k;

    if (Np == NULL && Kp == NULL) return NULL;
    if (Np == NULL) return Kp;
    if (Kp == NULL) return Np;

    listelem *nH;
    if (Np->data < Kp->data) nH = n;
    if (Np->data > Kp->data) nH = k;

    listelem *nA = Np, *nB = Kp;

    if (nH == n) Np = Np->next;
    if (nH == k) Kp = Kp->next;

    if (nH == n){
        nH = nA;
        while (nA->next != NULL){
            if (Np == NULL || Kp == NULL) break;
            if (Np->data < Kp->data){
                nA->next = Np;
                Np = Np->next;
                nA = nA->next;
            }
            if (Np == NULL) break;
            if (Np->data > Kp->data){
                nA->next = Kp;
                Kp = Kp->next;
                nA = nA->next;
            }
            if (Kp == NULL) break;
            if (Np->data == Kp->data) {
                nA->next = Np;
                Np = Np->next;
                nA = nA->next;
            }
            if (nA->data == Kp->data){
                nA = nA->next;
                Kp = Kp->next;
            }
        }
        if (nA->next == NULL && Np != NULL)
            while (Np != NULL){
                nA->next = Np;
                Np = Np->next;
                nA = nA->next;
            }
        if (nA->next == NULL && Kp != NULL)
            while (Kp != NULL){
                nA->next = Kp;
                Kp = Kp->next;
                nA = nA->next;
        }
    }

    if (nH == k){
        nH = nB;
        while (nB->next != NULL){
            if (Np == NULL || Kp == NULL) break;
            if (Np->data < Kp->data){
                nB->next = Np;
                Np = Np->next;
                nB = nB->next;
            }
            if (Np == NULL) break;
            if (Np->data > Kp->data){
                nB->next = Kp;
                Kp = Kp->next;
                nB = nB->next;
            }
            if (Kp == NULL) break;
             if (Np->data == Kp->data) {
                nB->next = Kp;
                Kp = Kp->next;
                nB = nB->next;
            }
            if (nB->data == Np->data){
                nB = nB->next;
                Np = Np->next;
            }
        }

        if (nB->next == NULL && Np != NULL)
            while (Np != NULL){
                nB->next = Np;
                Np = Np->next;
                nB = nB->next;
            }
        if (nB->next == NULL && Kp != NULL)
            while (Kp != NULL){
                nB->next = Kp;
                Kp = Kp->next;
                nB = nB->next;
        }
    }

    return nH;
}

int main()
{

    double t[6] = {8.2, 9.7, 14.9, 21.2, 24.9, 25.9};
    double z[6] = {5.6, 24.8, 25.9, 29.3, 33.7, 33.8};

    listelem *tl = list_from_array(t, 6);
    listelem *zl = list_from_array(z, 6);
    listelem *m = merge(tl, zl);

    while (m != NULL){
        printf("%f ", m->data);
        m = m->next;
    }
    return 0;
}

