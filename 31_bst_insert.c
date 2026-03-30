#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* l,*r;};

struct Node* insert(struct Node* root,int v){
    if(!root){
        struct Node* t=malloc(sizeof(struct Node));
        t->data=v; t->l=t->r=NULL;
        return t;
    }
    if(v<root->data) root->l=insert(root->l,v);
    else root->r=insert(root->r,v);
    return root;
}

int main(){
    struct Node* root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,70);
    printf("%d",root->data);
    return 0;
}