#include <stdio.h>
#include <stdlib.h>
typedef struct list_elem {
    double data;
    struct list_elem *next;
} list_elem, *list_ptr;

list_elem* push_front (list_elem *head, double d ) {
    list_elem *p = (list_elem *)malloc(sizeof(list_elem));
    p->data = d;
    p->next = head;
    head = p;
    return head;
}

list_elem *array_to_list(double *t, int size) {
    list_elem* out = NULL;
    for (int i = 0; i < size; i++){
        out = push_front(out, t[i]);
    }
    return out;
}

void traverse(list_elem * head) {
    list_elem * p ;
    for (p = head; p != NULL; p = p->next)
        printf("%f ", p->data);
}

int main() {
    double T[5] =  {1.00, -2.00, 3.00, 2.00, 5.20};
    list_elem * Fasz = array_to_list(T, 5);
    traverse(Fasz);
    return 0;
}
