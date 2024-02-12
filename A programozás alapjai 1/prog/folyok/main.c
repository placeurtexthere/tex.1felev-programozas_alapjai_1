#include <stdio.h>
#include <string.h>

typedef struct r {
    struct r *left, *right;
    char name[20+1]; // neve
    double w;        // vizhozama
} *river_tree;

void fill(river_tree head) {
    river_tree tmp = head;
    if (tmp == NULL)
        return;
    if (tmp->right == NULL && tmp->left == NULL)
        return;
    if (tmp->right != NULL && tmp->left != NULL) {
        fill(tmp->left);
        fill(tmp->right);
    }
    if (tmp->right->w > tmp->left->w) {
        strcpy(tmp->name, tmp->right->name);
        tmp->w = tmp->right->w + tmp->left->w;
        return;
    }
    if (tmp->right->w < tmp->left->w) {
        strcpy(tmp->name, tmp->left->name);
        tmp->w = tmp->right->w + tmp->left->w;
        return;
    }
}

/*
void fill(river_tree root){
    river_tree temp = root;
    if(temp==NULL)return;
    if(temp->right==NULL && temp->left==NULL)return;
    if(temp->left!=NULL && temp->right!=NULL){
        fill(temp->right);
        fill(temp->left);
    }
    if(temp->right->w>temp->left->w){
        strcpy(temp->name, temp->right->name);
        temp->w=temp->right->w+temp->left->w;
        return;
    }
    if(temp->left->w>temp->right->w){
        strcpy(temp->name, temp->left->name);
        temp->w=temp->right->w+temp->left->w;
        return;
    }
}*/

int main() {
    printf("Hello, World!\n");
    return 0;
}
