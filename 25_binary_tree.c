#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* l,*r;};
struct Node* create(int v){
    struct Node* t=malloc(sizeof(struct Node));
    t->data=v; t->l=t->r=NULL;
    return t;
}
void preorder(struct Node* root){
    if(root){
        printf("%d ", root->data);
        preorder(root->l);
        preorder(root->r);
    }
}
int main(){
    struct Node* root=create(1);
    root->l=create(2); root->r=create(3);
    preorder(root);
    return 0;
}