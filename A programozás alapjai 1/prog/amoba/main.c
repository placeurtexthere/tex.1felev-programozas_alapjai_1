#include <stdio.h>
#include <stdlib.h>

typedef struct list_elem
{
    double data;
    struct list_elem *next;
} list_elem, *list_ptr;

/*
list_ptr push(list_ptr head, double data) {
    list_ptr p = malloc(sizeof(list_elem));
    p->data = p;
    p->next = head;
    head = p;
    return p;
}

list_ptr array_to_list(double t[], int meret) {
    list_ptr stack = NULL;
    for (int i = 0; i < meret; ++i) {
        stack = push(stack, t[i]);
    }
    return list_ptr;
}
*/

list_ptr array_to_list(double *t) {
    int i = 0;
    list_ptr stack = NULL;
    while(t[i] == NULL) {
        stack = push(stack, t[i]);
        i++;
    }
    return stack;
}

int main() {

    return 0;
}
