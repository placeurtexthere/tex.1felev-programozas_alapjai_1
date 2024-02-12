#include <stdio.h>
#include <stdlib.h>

int isin(int* t, int l, int n){
    for (int i = 0; i < l; i++)
        if (t[i] == n) return 1;
    return 0;
}

int *intersection(int* t1, int n1, int* t2, int n2, int* m){
    int *t3; int db = 0;

    for (int i = 0; i < n1; i++)
        if (isin(t2, n2, t1[i]) == 1) db++;

    if (db != 0) t3 = (int *)malloc(db * sizeof(int));

    db = 0;
    for (int i = 0; i < n1; i++)
        if (isin(t2, n2, t1[i]) == 1) {t3[db] = t1[i]; db++;}

    *m = db;
    return t3;
}

int main()
{
    int elso[7] = {3, 4, 1, -3, -2, 5, 2};
    int masod[5] = {-3, 8, 4, 5, 6};

    int* metHo;
    int *metszet = intersection(elso, 7, masod, 5, metHo);

    for (int i = 0; i < *metHo; i++) printf("%d ", metszet[i]);
    return 0;
}
