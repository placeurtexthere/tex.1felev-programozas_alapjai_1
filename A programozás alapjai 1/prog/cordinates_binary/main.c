#include <stdio.h>
#include <stdlib.h>

typedef struct _point_listelem {
    double x, y, z;
    struct _point_listelem* next;
} point_listelem;

void save(char s[], point_listelem *head) {
    point_listelem *h = head;
    FILE *f = fopen(s, "wb");
    if (f == NULL)
        return;
    while (h != NULL)
    {
        fwrite(&h->x, sizeof(double), 1, f);
        fwrite(&h->y, sizeof(double), 1, f);
        fwrite(&h->z, sizeof(double), 1, f);
        h = h->next;
    }
    fclose(f);
}
point_listelem* restore(char name[])
{
    FILE *f = fopen(name, "rb");
    point_listelem *head = malloc(sizeof(point_listelem));
    point_listelem *h = head;
    double c[3];
    fread(c, sizeof(double), 3, f);
    h->x = c[0]; h->y = c[1]; h->z = c[2];

    while(fread(c, sizeof(double), 3, f))
    {
        h->next = malloc(sizeof(point_listelem));
        h = h->next;
        h->x = c[0]; h->y = c[1]; h->z = c[2];
    }
    h->next = NULL;
    fclose(f);
    return head;
}

/*
point_listelem *push_front(point_listelem *head, double x, double y, double z) {
    point_listelem *p;
    for (p = head; p->next != NULL; p = p->next);
    p->next = (point_listelem*)malloc(sizeof(point_listelem*));
    p->next->next = NULL;
    p->next->x = x;
    p->next->y = y;
    p->next->z = z;
    
    return head;
}

point_listelem* restore(char s[]) {
    point_listelem *tmp = NULL;
    FILE *f = fopen(s, "rb");
    point_listelem *list = NULL;
    double x, y, z;
    while (fread(&x, sizeof(double), 1, f) == 1 && fread(&y, sizeof(double), 1, f) == 1 && fread(&z, sizeof(double), 1, f) == 1) {
        list = push_front(list, x, y, z);
    }
    /*
    fread(&z, sizeof(double), 1, f);
    fread(&y, sizeof(double), 1, f);
    fread(&x, sizeof(double), 1, f);
    */
    fclose(f);
    return list;
}*/
 
int main(void) {

}