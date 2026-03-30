#include <stdio.h>
#include <stdlib.h>
struct Node{int data; struct Node* l,*r;};

struct Node* deleteNode(struct Node* root,int key){
    if(!root) return root;
    if(key<root->data) root->l=deleteNode(root->l,key);
    else if(key>root->data) root->r=deleteNode(root->r,key);
    else return NULL;
    return root;
}

int main(){
    struct Node* root=malloc(sizeof(struct Node));
    root->data=10; root->l=root->r=NULL;
    root=deleteNode(root,10);
    if(!root) printf("Deleted");
    return 0;
}